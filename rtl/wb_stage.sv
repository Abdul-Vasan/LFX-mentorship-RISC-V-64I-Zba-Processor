module wb_stage
    import riscv_pkg::*;
(
    // From MEM/WB register
    input  mem_wb_reg_t mem_wb_reg,
    // Outputs to register file
    output logic [4:0]  rd_addr,
    output logic [63:0] rd_data,
    output logic        rd_wen
);

    // Writeback data selection
    assign rd_data = mem_wb_reg.mem_to_reg ? mem_wb_reg.mem_data : mem_wb_reg.alu_result;

    // Register file write control
    assign rd_addr = mem_wb_reg.rd_addr;
    assign rd_wen = mem_wb_reg.reg_write && mem_wb_reg.valid;

endmodule
