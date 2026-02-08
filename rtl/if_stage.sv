module if_stage
    import riscv_pkg::*;
(
    input  logic        clk,
    input  logic        rst_n,
    input  logic        stall,
    input  logic        branch_taken,
    input  logic        jump,
    input  logic        is_jalr,
    input  logic [63:0] branch_target,
    input  logic [63:0] jalr_target,
    // Instruction memory interface
    output logic [63:0] imem_addr,
    input  logic [31:0] imem_rdata,
    // Outputs to IF/ID register
    output logic [63:0] pc_out,
    output logic [31:0] instr_out,
    output logic        valid_out
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
