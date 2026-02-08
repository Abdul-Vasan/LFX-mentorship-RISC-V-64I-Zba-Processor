module hazard_unit
    import riscv_pkg::*;
(
    // From ID stage
    input  logic [4:0]  rs1_addr_id,
    input  logic [4:0]  rs2_addr_id,
    // From EX stage
    input  logic [4:0]  rd_addr_ex,
    input  logic        reg_write_ex,
    input  logic        mem_read_ex,
    input  logic        valid_ex,
    // From MEM stage
    input  logic [4:0]  rd_addr_mem,
    input  logic        reg_write_mem,
    input  logic        valid_mem,
    // From WB stage
    input  logic [4:0]  rd_addr_wb,
    input  logic        reg_write_wb,
    input  logic        valid_wb,
    // Branch/jump control
    input  logic        branch_taken,
    input  logic        jump,
    // Outputs
    output logic        stall_if,
    output logic        stall_id,
    output logic        flush_id,
    output logic        flush_ex
);

    logic rs1_hazard_ex, rs2_hazard_ex;
    logic rs1_hazard_mem, rs2_hazard_mem;
    logic rs1_hazard_wb, rs2_hazard_wb;
    logic data_hazard;

    // Check for RAW hazards with EX stage
    assign rs1_hazard_ex = valid_ex && reg_write_ex && (rd_addr_ex != 5'd0) && (rd_addr_ex == rs1_addr_id);
    assign rs2_hazard_ex = valid_ex && reg_write_ex && (rd_addr_ex != 5'd0) && (rd_addr_ex == rs2_addr_id);

    // Check for RAW hazards with MEM stage
    assign rs1_hazard_mem = valid_mem && reg_write_mem && (rd_addr_mem != 5'd0) && (rd_addr_mem == rs1_addr_id);
    assign rs2_hazard_mem = valid_mem && reg_write_mem && (rd_addr_mem != 5'd0) && (rd_addr_mem == rs2_addr_id);

    // Check for RAW hazards with WB stage
    assign rs1_hazard_wb = valid_wb && reg_write_wb && (rd_addr_wb != 5'd0) && (rd_addr_wb == rs1_addr_id);
    assign rs2_hazard_wb = valid_wb && reg_write_wb && (rd_addr_wb != 5'd0) && (rd_addr_wb == rs2_addr_id);

    // Stall-only: any hazard causes a stall
    assign data_hazard = (rs1_hazard_ex || rs2_hazard_ex ||
                          rs1_hazard_mem || rs2_hazard_mem ||
                          rs1_hazard_wb || rs2_hazard_wb);

    // Stall IF and ID on data hazard
    assign stall_if = data_hazard;
    assign stall_id = data_hazard;

    // Flush on branch taken or jump (control hazard)
    assign flush_id = branch_taken || jump;
    assign flush_ex = branch_taken || jump || data_hazard;

endmodule
