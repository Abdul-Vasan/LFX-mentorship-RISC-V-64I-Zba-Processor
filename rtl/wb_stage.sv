//==============================================================================
// Module: wb_stage
// Description: Writeback stage - register file write data selection
//
// Functions:
//   - Select between ALU result and memory load data
//   - Generate register file write control signals
//   - Prevent writes to x0 (handled by register file)
//==============================================================================
module wb_stage
    import riscv_pkg::*;
(
    input  mem_wb_reg_t mem_wb_reg,  // Pipeline register from MEM stage
    output logic [4:0]  rd_addr,     // Destination register address
    output logic [63:0] rd_data,     // Data to write
    output logic        rd_wen       // Write enable
);

    // Writeback data selection
    assign rd_data = mem_wb_reg.mem_to_reg ? mem_wb_reg.mem_data : mem_wb_reg.alu_result;

    // Register file write control
    assign rd_addr = mem_wb_reg.rd_addr;
    assign rd_wen = mem_wb_reg.reg_write && mem_wb_reg.valid;

endmodule
