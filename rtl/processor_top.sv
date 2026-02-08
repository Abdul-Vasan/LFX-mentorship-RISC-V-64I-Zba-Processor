//==============================================================================
// Module: processor_top
// Description: Top-level module for RV64I+Zba 5-stage pipelined processor
//
// Architecture:
//   - 5-stage pipeline: IF (Fetch), ID (Decode), EX (Execute), MEM (Memory), WB (Writeback)
//   - Stall-only hazard handling (no forwarding)
//   - Supports RV64I base integer instruction set
//   - Supports Zba (address generation) extension
//
// Interfaces:
//   - Separate instruction and data memory interfaces
//   - Active-low asynchronous reset
//   - ECALL detection for simulation termination
//==============================================================================
module processor_top
    import riscv_pkg::*;
(
    // Clock and Reset
    input  logic        clk,          // System clock
    input  logic        rst_n,        // Active-low asynchronous reset

    // Instruction Memory Interface (Read-Only)
    output logic [63:0] imem_addr,    // Instruction fetch address (PC)
    input  logic [31:0] imem_rdata,   // Fetched instruction

    // Data Memory Interface (Read/Write)
    output logic [63:0] dmem_addr,    // Memory access address
    output logic [63:0] dmem_wdata,   // Data to write
    output logic [7:0]  dmem_byte_en, // Byte enable for partial writes
    output logic        dmem_wen,     // Write enable (1=write, 0=read)
    input  logic [63:0] dmem_rdata,   // Data read from memory

    // Status Output
    output logic        ecall_o       // ECALL instruction detected
);

    // IF stage signals
    logic [63:0] if_pc;
    logic [31:0] if_instr;
    logic        if_valid;

    // IF/ID register
    if_id_reg_t if_id_reg;

    // ID stage signals
    logic [63:0] id_rs1_data;
    logic [63:0] id_rs2_data;
    logic [63:0] id_imm;
    logic [4:0]  id_rs1_addr;
    logic [4:0]  id_rs2_addr;
    logic [4:0]  id_rd_addr;
    logic [2:0]  id_funct3;
    ctrl_t       id_ctrl;
    logic        id_ecall;

    // ID/EX register
    id_ex_reg_t id_ex_reg;

    // EX stage signals
    logic [63:0] ex_alu_result;
    logic [63:0] ex_branch_target;
    logic [63:0] ex_jalr_target;
    logic        ex_branch_taken;
    logic        ex_jump;

    // EX/MEM register
    ex_mem_reg_t ex_mem_reg;

    // MEM stage signals
    logic [63:0] mem_rdata;

    // MEM/WB register
    mem_wb_reg_t mem_wb_reg;

    // WB stage signals
    logic [4:0]  wb_rd_addr;
    logic [63:0] wb_rd_data;
    logic        wb_rd_wen;

    // Hazard unit signals
    logic stall_if;
    logic stall_id;
    logic flush_id;
    logic flush_ex;

    // ECALL detection
    assign ecall_o = id_ecall && if_id_reg.valid;

    // IF Stage
    if_stage u_if_stage (
        .clk           (clk),
        .rst_n         (rst_n),
        .stall         (stall_if),
        .branch_taken  (ex_branch_taken),
        .jump          (ex_jump),
        .is_jalr       (id_ex_reg.ctrl.is_jalr),
        .branch_target (ex_branch_target),
        .jalr_target   (ex_jalr_target),
        .imem_addr     (imem_addr),
        .imem_rdata    (imem_rdata),
        .pc_out        (if_pc),
        .instr_out     (if_instr),
        .valid_out     (if_valid)
    );

    // IF/ID Pipeline Register
    if_id_register u_if_id_reg (
        .clk       (clk),
        .rst_n     (rst_n),
        .stall     (stall_id),
        .flush     (flush_id),
        .pc_in     (if_pc),
        .instr_in  (if_instr),
        .valid_in  (if_valid),
        .reg_out   (if_id_reg)
    );

    // ID Stage
    id_stage u_id_stage (
        .clk         (clk),
        .rst_n       (rst_n),
        .if_id_reg   (if_id_reg),
        .rd_addr_wb  (wb_rd_addr),
        .rd_data_wb  (wb_rd_data),
        .rd_wen_wb   (wb_rd_wen),
        .rs1_data    (id_rs1_data),
        .rs2_data    (id_rs2_data),
        .imm         (id_imm),
        .rs1_addr    (id_rs1_addr),
        .rs2_addr    (id_rs2_addr),
        .rd_addr     (id_rd_addr),
        .funct3      (id_funct3),
        .ctrl        (id_ctrl),
        .ecall       (id_ecall)
    );

    // Hazard Unit
    hazard_unit u_hazard_unit (
        .rs1_addr_id   (id_rs1_addr),
        .rs2_addr_id   (id_rs2_addr),
        .rd_addr_ex    (id_ex_reg.rd_addr),
        .reg_write_ex  (id_ex_reg.ctrl.reg_write),
        .valid_ex      (id_ex_reg.valid),
        .rd_addr_mem   (ex_mem_reg.rd_addr),
        .reg_write_mem (ex_mem_reg.reg_write),
        .valid_mem     (ex_mem_reg.valid),
        .rd_addr_wb    (mem_wb_reg.rd_addr),
        .reg_write_wb  (mem_wb_reg.reg_write),
        .valid_wb      (mem_wb_reg.valid),
        .branch_taken  (ex_branch_taken),
        .jump          (ex_jump),
        .stall_if      (stall_if),
        .stall_id      (stall_id),
        .flush_id      (flush_id),
        .flush_ex      (flush_ex)
    );

    // ID/EX Pipeline Register
    id_ex_register u_id_ex_reg (
        .clk          (clk),
        .rst_n        (rst_n),
        .flush        (flush_ex),
        .pc_in        (if_id_reg.pc),
        .rs1_data_in  (id_rs1_data),
        .rs2_data_in  (id_rs2_data),
        .imm_in       (id_imm),
        .rs1_addr_in  (id_rs1_addr),
        .rs2_addr_in  (id_rs2_addr),
        .rd_addr_in   (id_rd_addr),
        .funct3_in    (id_funct3),
        .ctrl_in      (id_ctrl),
        .valid_in     (if_id_reg.valid),
        .reg_out      (id_ex_reg)
    );

    // EX Stage
    ex_stage u_ex_stage (
        .id_ex_reg     (id_ex_reg),
        .alu_result    (ex_alu_result),
        .branch_target (ex_branch_target),
        .jalr_target   (ex_jalr_target),
        .branch_taken  (ex_branch_taken),
        .jump          (ex_jump)
    );

    // EX/MEM Pipeline Register
    ex_mem_register u_ex_mem_reg (
        .clk             (clk),
        .rst_n           (rst_n),
        .pc_in           (id_ex_reg.pc),
        .alu_result_in   (ex_alu_result),
        .rs2_data_in     (id_ex_reg.rs2_data),
        .rd_addr_in      (id_ex_reg.rd_addr),
        .funct3_in       (id_ex_reg.funct3),
        .mem_read_in     (id_ex_reg.ctrl.mem_read),
        .mem_write_in    (id_ex_reg.ctrl.mem_write),
        .mem_to_reg_in   (id_ex_reg.ctrl.mem_to_reg),
        .reg_write_in    (id_ex_reg.ctrl.reg_write),
        .mem_size_in     (id_ex_reg.ctrl.mem_size),
        .mem_unsigned_in (id_ex_reg.ctrl.mem_unsigned),
        .valid_in        (id_ex_reg.valid),
        .reg_out         (ex_mem_reg)
    );

    // MEM Stage
    mem_stage u_mem_stage (
        .ex_mem_reg   (ex_mem_reg),
        .dmem_addr    (dmem_addr),
        .dmem_wdata   (dmem_wdata),
        .dmem_byte_en (dmem_byte_en),
        .dmem_wen     (dmem_wen),
        .dmem_rdata   (dmem_rdata),
        .mem_rdata    (mem_rdata)
    );

    // MEM/WB Pipeline Register
    mem_wb_register u_mem_wb_reg (
        .clk            (clk),
        .rst_n          (rst_n),
        .alu_result_in  (ex_mem_reg.alu_result),
        .mem_data_in    (mem_rdata),
        .rd_addr_in     (ex_mem_reg.rd_addr),
        .mem_to_reg_in  (ex_mem_reg.mem_to_reg),
        .reg_write_in   (ex_mem_reg.reg_write),
        .valid_in       (ex_mem_reg.valid),
        .reg_out        (mem_wb_reg)
    );

    // WB Stage
    wb_stage u_wb_stage (
        .mem_wb_reg (mem_wb_reg),
        .rd_addr    (wb_rd_addr),
        .rd_data    (wb_rd_data),
        .rd_wen     (wb_rd_wen)
    );

endmodule
