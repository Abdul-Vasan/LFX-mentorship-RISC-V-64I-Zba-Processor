//==============================================================================
// Module: register_file
// Description: 32x64-bit RISC-V integer register file
//
// Features:
//   - 32 general-purpose 64-bit registers (x0-x31)
//   - x0 is hardwired to zero (reads always return 0, writes ignored)
//   - 2 combinational read ports (rs1, rs2)
//   - 1 synchronous write port (rd)
//   - Asynchronous active-low reset clears all registers
//==============================================================================
module register_file (
    input  logic        clk,       // System clock
    input  logic        rst_n,     // Active-low asynchronous reset

    // Read port 1 (combinational)
    input  logic [4:0]  rs1_addr,  // Source register 1 address
    output logic [63:0] rs1_data,  // Source register 1 data

    // Read port 2 (combinational)
    input  logic [4:0]  rs2_addr,  // Source register 2 address
    output logic [63:0] rs2_data,  // Source register 2 data

    // Write port (synchronous, active on rising clock edge)
    input  logic [4:0]  rd_addr,   // Destination register address
    input  logic [63:0] rd_data,   // Data to write
    input  logic        rd_wen     // Write enable
);

    logic [63:0] registers [1:31];

    // Combinational read (x0 always returns 0)
    assign rs1_data = (rs1_addr == 5'd0) ? 64'd0 : registers[rs1_addr];
    assign rs2_data = (rs2_addr == 5'd0) ? 64'd0 : registers[rs2_addr];

    // Synchronous write (ignore writes to x0)
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            for (int i = 1; i < 32; i++) begin
                registers[i] <= 64'd0;
            end
        end else if (rd_wen && rd_addr != 5'd0) begin
            registers[rd_addr] <= rd_data;
        end
    end

endmodule
