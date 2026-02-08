//==============================================================================
// Module: if_stage
// Description: Instruction Fetch stage - PC management and instruction fetch
//
// Functions:
//   - Program counter register with stall support
//   - Next PC selection: sequential, branch target, or JALR target
//   - Instruction memory address generation
//   - JALR target aligned to even address (LSB cleared per RISC-V spec)
//==============================================================================
module if_stage (
    input  logic        clk,           // System clock
    input  logic        rst_n,         // Active-low reset
    input  logic        stall,         // Pipeline stall
    input  logic        branch_taken,  // Branch condition met
    input  logic        jump,          // JAL/JALR instruction
    input  logic        is_jalr,       // JALR (vs JAL)
    input  logic [63:0] branch_target, // Branch/JAL destination
    input  logic [63:0] jalr_target,   // JALR destination
    output logic [63:0] imem_addr,     // Instruction memory address
    input  logic [31:0] imem_rdata,    // Instruction from memory
    output logic [63:0] pc_out,        // Current PC to pipeline
    output logic [31:0] instr_out,     // Instruction to pipeline
    output logic        valid_out      // Instruction valid flag
);

    logic [63:0] pc_reg;
    logic [63:0] pc_next;

    // PC register
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            pc_reg <= 64'd0;
        end else if (!stall) begin
            pc_reg <= pc_next;
        end
    end

    // Next PC logic
    always_comb begin
        if (jump && is_jalr)
            pc_next = jalr_target & ~64'd1;
        else if (branch_taken || jump)
            pc_next = branch_target;
        else
            pc_next = pc_reg + 64'd4;
    end

    // Outputs
    assign imem_addr  = pc_reg;
    assign pc_out     = pc_reg;
    assign instr_out  = imem_rdata;
    assign valid_out  = 1'b1;

endmodule
