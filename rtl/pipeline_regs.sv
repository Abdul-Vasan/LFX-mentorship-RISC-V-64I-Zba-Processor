//==============================================================================
// Pipeline Registers for 5-Stage RISC-V Processor
//
// Contains four pipeline registers:
//   IF/ID  - Instruction Fetch to Decode
//   ID/EX  - Decode to Execute
//   EX/MEM - Execute to Memory
//   MEM/WB - Memory to Writeback
//
// Features:
//   - Synchronous operation on rising clock edge
//   - Asynchronous active-low reset
//   - Stall support (IF/ID only)
//   - Flush support (IF/ID, ID/EX)
//==============================================================================

module if_id_register
    import riscv_pkg::*;
(
    input  logic       clk,
    input  logic       rst_n,
    input  logic       stall,
    input  logic       flush,
    input  logic [63:0] pc_in,
    input  logic [31:0] instr_in,
    input  logic        valid_in,
    output if_id_reg_t  reg_out
);

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            reg_out <= '0;
        end else if (flush) begin
            reg_out <= '0;
        end else if (!stall) begin
            reg_out.pc    <= pc_in;
            reg_out.instr <= instr_in;
            reg_out.valid <= valid_in;
        end
    end

endmodule

module id_ex_register
    import riscv_pkg::*;
(
    input  logic        clk,
    input  logic        rst_n,
    input  logic        flush,
    input  logic [63:0] pc_in,
    input  logic [63:0] rs1_data_in,
    input  logic [63:0] rs2_data_in,
    input  logic [63:0] imm_in,
    input  logic [4:0]  rs1_addr_in,
    input  logic [4:0]  rs2_addr_in,
    input  logic [4:0]  rd_addr_in,
    input  logic [2:0]  funct3_in,
    input  ctrl_t       ctrl_in,
    input  logic        valid_in,
    output id_ex_reg_t  reg_out
);

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            reg_out <= '0;
        end else if (flush) begin
            reg_out <= '0;
        end else begin
            reg_out.pc       <= pc_in;
            reg_out.rs1_data <= rs1_data_in;
            reg_out.rs2_data <= rs2_data_in;
            reg_out.imm      <= imm_in;
            reg_out.rs1_addr <= rs1_addr_in;
            reg_out.rs2_addr <= rs2_addr_in;
            reg_out.rd_addr  <= rd_addr_in;
            reg_out.funct3   <= funct3_in;
            reg_out.ctrl     <= ctrl_in;
            reg_out.valid    <= valid_in;
        end
    end

endmodule

module ex_mem_register
    import riscv_pkg::*;
(
    input  logic        clk,
    input  logic        rst_n,
    input  logic [63:0] pc_in,
    input  logic [63:0] alu_result_in,
    input  logic [63:0] rs2_data_in,
    input  logic [4:0]  rd_addr_in,
    input  logic [2:0]  funct3_in,
    input  logic        mem_read_in,
    input  logic        mem_write_in,
    input  logic        mem_to_reg_in,
    input  logic        reg_write_in,
    input  mem_size_t   mem_size_in,
    input  logic        mem_unsigned_in,
    input  logic        valid_in,
    output ex_mem_reg_t reg_out
);

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            reg_out <= '0;
        end else begin
            reg_out.pc           <= pc_in;
            reg_out.alu_result   <= alu_result_in;
            reg_out.rs2_data     <= rs2_data_in;
            reg_out.rd_addr      <= rd_addr_in;
            reg_out.funct3       <= funct3_in;
            reg_out.mem_read     <= mem_read_in;
            reg_out.mem_write    <= mem_write_in;
            reg_out.mem_to_reg   <= mem_to_reg_in;
            reg_out.reg_write    <= reg_write_in;
            reg_out.mem_size     <= mem_size_in;
            reg_out.mem_unsigned <= mem_unsigned_in;
            reg_out.valid        <= valid_in;
        end
    end

endmodule

module mem_wb_register
    import riscv_pkg::*;
(
    input  logic        clk,
    input  logic        rst_n,
    input  logic [63:0] alu_result_in,
    input  logic [63:0] mem_data_in,
    input  logic [4:0]  rd_addr_in,
    input  logic        mem_to_reg_in,
    input  logic        reg_write_in,
    input  logic        valid_in,
    output mem_wb_reg_t reg_out
);

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            reg_out <= '0;
        end else begin
            reg_out.alu_result <= alu_result_in;
            reg_out.mem_data   <= mem_data_in;
            reg_out.rd_addr    <= rd_addr_in;
            reg_out.mem_to_reg <= mem_to_reg_in;
            reg_out.reg_write  <= reg_write_in;
            reg_out.valid      <= valid_in;
        end
    end

endmodule
