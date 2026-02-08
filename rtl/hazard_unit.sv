//==============================================================================
// Module: hazard_unit
// Description: Pipeline hazard detection and control unit
//
// Hazard Handling Strategy: STALL-ONLY (no forwarding)
//   - Detects RAW (Read-After-Write) data hazards
//   - Stalls IF and ID stages until hazard clears
//   - Flushes pipeline on control hazards (branches/jumps)
//
// Data Hazards Detected:
//   - EX stage writing to register read by ID stage
//   - MEM stage writing to register read by ID stage
//   - WB stage writing to register read by ID stage
//
// Control Hazards:
//   - Branch taken: Flush IF/ID and ID/EX (2 cycle penalty)
//   - Jump: Flush IF/ID and ID/EX
//==============================================================================
module hazard_unit (
    // Source registers from ID stage (current instruction)
    input  logic [4:0]  rs1_addr_id,   // Source register 1 being read
    input  logic [4:0]  rs2_addr_id,   // Source register 2 being read

    // Destination info from EX stage (1 cycle ahead)
    input  logic [4:0]  rd_addr_ex,    // Destination register
    input  logic        reg_write_ex,  // Will write to register
    input  logic        valid_ex,      // Stage contains valid instruction

    // Destination info from MEM stage (2 cycles ahead)
    input  logic [4:0]  rd_addr_mem,   // Destination register
    input  logic        reg_write_mem, // Will write to register
    input  logic        valid_mem,     // Stage contains valid instruction

    // Destination info from WB stage (3 cycles ahead)
    input  logic [4:0]  rd_addr_wb,    // Destination register
    input  logic        reg_write_wb,  // Will write to register
    input  logic        valid_wb,      // Stage contains valid instruction

    // Control hazard inputs
    input  logic        branch_taken,  // Branch condition met
    input  logic        jump,          // JAL/JALR instruction

    // Hazard control outputs
    output logic        stall_if,      // Stall instruction fetch
    output logic        stall_id,      // Stall instruction decode
    output logic        flush_id,      // Flush IF/ID register (insert bubble)
    output logic        flush_ex       // Flush ID/EX register (insert bubble)
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
