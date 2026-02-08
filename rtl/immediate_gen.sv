//==============================================================================
// Module: immediate_gen
// Description: Immediate value generator for RISC-V instructions
//
// Extracts and sign-extends immediate values based on instruction format:
//   I-type: 12-bit signed immediate (arithmetic, loads, JALR)
//   S-type: 12-bit signed immediate (stores)
//   B-type: 13-bit signed immediate, LSB=0 (branches)
//   U-type: 20-bit upper immediate (LUI, AUIPC)
//   J-type: 21-bit signed immediate, LSB=0 (JAL)
//==============================================================================
module immediate_gen
    import riscv_pkg::*;
(
    input  logic [31:0] instr,     // 32-bit instruction
    input  imm_type_t   imm_type,  // Immediate format selector
    output logic [63:0] imm        // Sign-extended 64-bit immediate
);

    logic [63:0] imm_i, imm_s, imm_b, imm_u, imm_j;

    // I-type: instr[31:20]
    assign imm_i = {{52{instr[31]}}, instr[31:20]};

    // S-type: instr[31:25], instr[11:7]
    assign imm_s = {{52{instr[31]}}, instr[31:25], instr[11:7]};

    // B-type: instr[31], instr[7], instr[30:25], instr[11:8], 0
    assign imm_b = {{51{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0};

    // U-type: instr[31:12], 12'b0
    assign imm_u = {{32{instr[31]}}, instr[31:12], 12'b0};

    // J-type: instr[31], instr[19:12], instr[20], instr[30:21], 0
    assign imm_j = {{43{instr[31]}}, instr[31], instr[19:12], instr[20], instr[30:21], 1'b0};

    always_comb begin
        case (imm_type)
            IMM_I:   imm = imm_i;
            IMM_S:   imm = imm_s;
            IMM_B:   imm = imm_b;
            IMM_U:   imm = imm_u;
            IMM_J:   imm = imm_j;
            default: imm = 64'd0;
        endcase
    end

endmodule
