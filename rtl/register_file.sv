module register_file
    import riscv_pkg::*;
(
    input  logic        clk,
    input  logic        rst_n,
    // Read ports
    input  logic [4:0]  rs1_addr,
    input  logic [4:0]  rs2_addr,
    output logic [63:0] rs1_data,
    output logic [63:0] rs2_data,
    // Write port
    input  logic [4:0]  rd_addr,
    input  logic [63:0] rd_data,
    input  logic        rd_wen
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
