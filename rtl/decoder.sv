//==============================================================================
// Module: decoder
// Description: Instruction decoder for RV64I base ISA + Zba extension
//
// Decodes 32-bit RISC-V instructions and generates control signals for:
//   - ALU operation selection
//   - Register file read/write control
//   - Memory access control (load/store)
//   - Branch and jump control
//   - Immediate type selection
//
// Supported Instruction Types:
//   R-type: Register-register operations (ADD, SUB, AND, OR, XOR, shifts, Zba)
//   I-type: Immediate operations, loads, JALR
//   S-type: Store instructions
//   B-type: Conditional branches
//   U-type: LUI, AUIPC
//   J-type: JAL
//==============================================================================
module decoder
    import riscv_pkg::*;
(
    input  logic [31:0] instr,         // 32-bit instruction to decode
    output logic [4:0]  rs1_addr,      // Source register 1 address
    output logic [4:0]  rs2_addr,      // Source register 2 address
    output logic [4:0]  rd_addr,       // Destination register address
    output logic [2:0]  funct3,        // Function code (operation variant)
    output logic [6:0]  funct7,        // Extended function code
    output imm_type_t   imm_type,      // Immediate format type
    output ctrl_t       ctrl,          // Control signals for datapath
    output logic        illegal_instr, // Invalid instruction flag
    output logic        ecall          // ECALL instruction detected
);

    logic [6:0] opcode;

    assign opcode   = instr[6:0];
    assign rd_addr  = instr[11:7];
    assign funct3   = instr[14:12];
    assign rs1_addr = instr[19:15];
    assign rs2_addr = instr[24:20];
    assign funct7   = instr[31:25];

    always_comb begin
        ctrl = '0;
        imm_type = IMM_I;
        illegal_instr = 1'b0;
        ecall = 1'b0;

        case (opcode)
            OP_LUI: begin
                ctrl.alu_op = ALU_PASS_B;
                ctrl.alu_src_a = ALU_SRC_A_ZERO;
                ctrl.alu_src_b = ALU_SRC_B_IMM;
                ctrl.reg_write = 1'b1;
                imm_type = IMM_U;
            end

            OP_AUIPC: begin
                ctrl.alu_op = ALU_ADD;
                ctrl.alu_src_a = ALU_SRC_A_PC;
                ctrl.alu_src_b = ALU_SRC_B_IMM;
                ctrl.reg_write = 1'b1;
                imm_type = IMM_U;
            end

            OP_JAL: begin
                ctrl.alu_op = ALU_ADD;
                ctrl.alu_src_a = ALU_SRC_A_PC;
                ctrl.alu_src_b = ALU_SRC_B_4;
                ctrl.reg_write = 1'b1;
                ctrl.jump = 1'b1;
                imm_type = IMM_J;
            end

            OP_JALR: begin
                ctrl.alu_op = ALU_ADD;
                ctrl.alu_src_a = ALU_SRC_A_PC;
                ctrl.alu_src_b = ALU_SRC_B_4;
                ctrl.reg_write = 1'b1;
                ctrl.jump = 1'b1;
                ctrl.is_jalr = 1'b1;
                imm_type = IMM_I;
            end

            OP_BRANCH: begin
                ctrl.branch = 1'b1;
                imm_type = IMM_B;
            end

            OP_LOAD: begin
                ctrl.alu_op = ALU_ADD;
                ctrl.alu_src_a = ALU_SRC_A_RS1;
                ctrl.alu_src_b = ALU_SRC_B_IMM;
                ctrl.mem_read = 1'b1;
                ctrl.mem_to_reg = 1'b1;
                ctrl.reg_write = 1'b1;
                ctrl.mem_size = mem_size_t'(funct3[1:0]);
                ctrl.mem_unsigned = funct3[2];
                imm_type = IMM_I;
            end

            OP_STORE: begin
                ctrl.alu_op = ALU_ADD;
                ctrl.alu_src_a = ALU_SRC_A_RS1;
                ctrl.alu_src_b = ALU_SRC_B_IMM;
                ctrl.mem_write = 1'b1;
                ctrl.mem_size = mem_size_t'(funct3[1:0]);
                imm_type = IMM_S;
            end

            OP_IMM: begin
                ctrl.alu_src_a = ALU_SRC_A_RS1;
                ctrl.alu_src_b = ALU_SRC_B_IMM;
                ctrl.reg_write = 1'b1;
                imm_type = IMM_I;
                case (funct3)
                    F3_ADD_SUB: ctrl.alu_op = ALU_ADD;
                    F3_SLT:     ctrl.alu_op = ALU_SLT;
                    F3_SLTU:    ctrl.alu_op = ALU_SLTU;
                    F3_XOR:     ctrl.alu_op = ALU_XOR;
                    F3_OR:      ctrl.alu_op = ALU_OR;
                    F3_AND:     ctrl.alu_op = ALU_AND;
                    F3_SLL:     ctrl.alu_op = ALU_SLL;
                    F3_SRL_SRA: ctrl.alu_op = instr[30] ? ALU_SRA : ALU_SRL;
                    default:    illegal_instr = 1'b1;
                endcase
            end

            OP_IMM_W: begin
                ctrl.alu_src_a = ALU_SRC_A_RS1;
                ctrl.alu_src_b = ALU_SRC_B_IMM;
                ctrl.reg_write = 1'b1;
                ctrl.is_word_op = 1'b1;
                imm_type = IMM_I;
                case (funct3)
                    F3_ADD_SUB: ctrl.alu_op = ALU_ADDW;
                    F3_SLL: begin
                        if (instr[31:26] == F6_SLLI_UW)
                            ctrl.alu_op = ALU_SLLI_UW;
                        else
                            ctrl.alu_op = ALU_SLLW;
                    end
                    F3_SRL_SRA: ctrl.alu_op = instr[30] ? ALU_SRAW : ALU_SRLW;
                    default:    illegal_instr = 1'b1;
                endcase
            end

            OP_REG: begin
                ctrl.alu_src_a = ALU_SRC_A_RS1;
                ctrl.alu_src_b = ALU_SRC_B_RS2;
                ctrl.reg_write = 1'b1;
                case (funct7)
                    F7_NORMAL: begin
                        case (funct3)
                            F3_ADD_SUB: ctrl.alu_op = ALU_ADD;
                            F3_SLL:     ctrl.alu_op = ALU_SLL;
                            F3_SLT:     ctrl.alu_op = ALU_SLT;
                            F3_SLTU:    ctrl.alu_op = ALU_SLTU;
                            F3_XOR:     ctrl.alu_op = ALU_XOR;
                            F3_SRL_SRA: ctrl.alu_op = ALU_SRL;
                            F3_OR:      ctrl.alu_op = ALU_OR;
                            F3_AND:     ctrl.alu_op = ALU_AND;
                            default:    illegal_instr = 1'b1;
                        endcase
                    end
                    F7_ALT: begin
                        case (funct3)
                            F3_ADD_SUB: ctrl.alu_op = ALU_SUB;
                            F3_SRL_SRA: ctrl.alu_op = ALU_SRA;
                            default:    illegal_instr = 1'b1;
                        endcase
                    end
                    F7_ZBA_SH: begin
                        case (funct3)
                            3'b010: ctrl.alu_op = ALU_SH1ADD;
                            3'b100: ctrl.alu_op = ALU_SH2ADD;
                            3'b110: ctrl.alu_op = ALU_SH3ADD;
                            default: illegal_instr = 1'b1;
                        endcase
                    end
                    default: illegal_instr = 1'b1;
                endcase
            end

            OP_REG_W: begin
                ctrl.alu_src_a = ALU_SRC_A_RS1;
                ctrl.alu_src_b = ALU_SRC_B_RS2;
                ctrl.reg_write = 1'b1;
                ctrl.is_word_op = 1'b1;
                case (funct7)
                    F7_NORMAL: begin
                        case (funct3)
                            F3_ADD_SUB: ctrl.alu_op = ALU_ADDW;
                            F3_SLL:     ctrl.alu_op = ALU_SLLW;
                            F3_SRL_SRA: ctrl.alu_op = ALU_SRLW;
                            default:    illegal_instr = 1'b1;
                        endcase
                    end
                    F7_ALT: begin
                        case (funct3)
                            F3_ADD_SUB: ctrl.alu_op = ALU_SUBW;
                            F3_SRL_SRA: ctrl.alu_op = ALU_SRAW;
                            default:    illegal_instr = 1'b1;
                        endcase
                    end
                    F7_ZBA_UW: begin
                        if (funct3 == 3'b000)
                            ctrl.alu_op = ALU_ADD_UW;
                        else
                            illegal_instr = 1'b1;
                    end
                    F7_ZBA_SH: begin
                        case (funct3)
                            3'b010: ctrl.alu_op = ALU_SH1ADDUW;
                            3'b100: ctrl.alu_op = ALU_SH2ADDUW;
                            3'b110: ctrl.alu_op = ALU_SH3ADDUW;
                            default: illegal_instr = 1'b1;
                        endcase
                    end
                    default: illegal_instr = 1'b1;
                endcase
            end

            OP_SYSTEM: begin
                if (instr[31:7] == 25'd0)
                    ecall = 1'b1;
                else
                    illegal_instr = 1'b1;
            end

            default: illegal_instr = 1'b1;
        endcase
    end

endmodule
