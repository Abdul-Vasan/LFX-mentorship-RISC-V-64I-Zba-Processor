module id_stage
    import riscv_pkg::*;
(
    input  logic        clk,
    input  logic        rst_n,
    // From IF/ID register
    input  if_id_reg_t  if_id_reg,
    // Register file write port (from WB)
    input  logic [4:0]  rd_addr_wb,
    input  logic [63:0] rd_data_wb,
    input  logic        rd_wen_wb,
    // Outputs
    output logic [63:0] rs1_data,
    output logic [63:0] rs2_data,
    output logic [63:0] imm,
    output logic [4:0]  rs1_addr,
    output logic [4:0]  rs2_addr,
    output logic [4:0]  rd_addr,
    output logic [2:0]  funct3,
    output ctrl_t       ctrl,
    output logic        ecall
);

    logic [6:0]   funct7;
    imm_type_t    imm_type;
    logic         illegal_instr;

    // Decoder
    decoder u_decoder (
        .instr         (if_id_reg.instr),
        .rs1_addr      (rs1_addr),
        .rs2_addr      (rs2_addr),
        .rd_addr       (rd_addr),
        .funct3        (funct3),
        .funct7        (funct7),
        .imm_type      (imm_type),
        .ctrl          (ctrl),
        .illegal_instr (illegal_instr),
        .ecall         (ecall)
    );

    // Immediate generator
    immediate_gen u_imm_gen (
        .instr    (if_id_reg.instr),
        .imm_type (imm_type),
        .imm      (imm)
    );

    // Register file
    register_file u_regfile (
        .clk      (clk),
        .rst_n    (rst_n),
        .rs1_addr (rs1_addr),
        .rs2_addr (rs2_addr),
        .rs1_data (rs1_data),
        .rs2_data (rs2_data),
        .rd_addr  (rd_addr_wb),
        .rd_data  (rd_data_wb),
        .rd_wen   (rd_wen_wb)
    );

endmodule
