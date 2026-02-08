//==============================================================================
// Package: riscv_pkg
// Description: Type definitions and constants for RV64I+Zba processor
//
// Contents:
//   - ALU operation encodings (including Zba extension)
//   - Control signal types
//   - Pipeline register structures
//   - RISC-V opcode and function code constants
//   - Immediate format types
//==============================================================================
package riscv_pkg;

    // Data widths
    localparam XLEN = 64;  // Register width (RV64)
    localparam ILEN = 32;  // Instruction width

    // Forward typedefs for struct dependencies
    typedef enum logic [4:0] {
        ALU_ADD     = 5'b00000,
        ALU_SUB     = 5'b00001,
        ALU_SLL     = 5'b00010,
        ALU_SLT     = 5'b00011,
        ALU_SLTU    = 5'b00100,
        ALU_XOR     = 5'b00101,
        ALU_SRL     = 5'b00110,
        ALU_SRA     = 5'b00111,
        ALU_OR      = 5'b01000,
        ALU_AND     = 5'b01001,
        ALU_SH1ADD  = 5'b01010,
        ALU_SH2ADD  = 5'b01011,
        ALU_SH3ADD  = 5'b01100,
        ALU_ADD_UW  = 5'b01101,
        ALU_SLLI_UW = 5'b01110,
        ALU_PASS_B  = 5'b01111,
        ALU_ADDW    = 5'b10000,
        ALU_SUBW    = 5'b10001,
        ALU_SLLW    = 5'b10010,
        ALU_SRLW    = 5'b10011,
        ALU_SRAW    = 5'b10100,
        ALU_SH1ADDUW = 5'b10101,
        ALU_SH2ADDUW = 5'b10110,
        ALU_SH3ADDUW = 5'b10111
    } alu_op_t;

    typedef enum logic [1:0] {
        ALU_SRC_A_RS1  = 2'b00,
        ALU_SRC_A_PC   = 2'b01,
        ALU_SRC_A_ZERO = 2'b10
    } alu_src_a_t;

    typedef enum logic [1:0] {
        ALU_SRC_B_RS2 = 2'b00,
        ALU_SRC_B_IMM = 2'b01,
        ALU_SRC_B_4   = 2'b10
    } alu_src_b_t;

    typedef enum logic [2:0] {
        MEM_BYTE   = 3'b000,
        MEM_HALF   = 3'b001,
        MEM_WORD   = 3'b010,
        MEM_DOUBLE = 3'b011
    } mem_size_t;

    typedef struct packed {
        alu_op_t    alu_op;
        alu_src_a_t alu_src_a;
        alu_src_b_t alu_src_b;
        logic       mem_read;
        logic       mem_write;
        logic       mem_to_reg;
        logic       reg_write;
        logic       branch;
        logic       jump;
        logic       is_jalr;
        mem_size_t  mem_size;
        logic       mem_unsigned;
        logic       is_word_op;
    } ctrl_t;

    typedef struct packed {
        logic [63:0] pc;
        logic [31:0] instr;
        logic        valid;
    } if_id_reg_t;

    typedef struct packed {
        logic [63:0] pc;
        logic [63:0] rs1_data;
        logic [63:0] rs2_data;
        logic [63:0] imm;
        logic [4:0]  rs1_addr;
        logic [4:0]  rs2_addr;
        logic [4:0]  rd_addr;
        logic [2:0]  funct3;
        ctrl_t       ctrl;
        logic        valid;
    } id_ex_reg_t;

    typedef struct packed {
        logic [63:0] pc;
        logic [63:0] alu_result;
        logic [63:0] rs2_data;
        logic [4:0]  rd_addr;
        logic [2:0]  funct3;
        logic        mem_read;
        logic        mem_write;
        logic        mem_to_reg;
        logic        reg_write;
        mem_size_t   mem_size;
        logic        mem_unsigned;
        logic        valid;
    } ex_mem_reg_t;

    typedef struct packed {
        logic [63:0] alu_result;
        logic [63:0] mem_data;
        logic [4:0]  rd_addr;
        logic        mem_to_reg;
        logic        reg_write;
        logic        valid;
    } mem_wb_reg_t;

    // Opcodes (bits [6:0] of instruction)
    localparam logic [6:0] OP_LOAD     = 7'b0000011;
    localparam logic [6:0] OP_STORE    = 7'b0100011;
    localparam logic [6:0] OP_BRANCH   = 7'b1100011;
    localparam logic [6:0] OP_JAL      = 7'b1101111;
    localparam logic [6:0] OP_JALR     = 7'b1100111;
    localparam logic [6:0] OP_IMM      = 7'b0010011;
    localparam logic [6:0] OP_IMM_W    = 7'b0011011;
    localparam logic [6:0] OP_REG      = 7'b0110011;
    localparam logic [6:0] OP_REG_W    = 7'b0111011;
    localparam logic [6:0] OP_LUI      = 7'b0110111;
    localparam logic [6:0] OP_AUIPC    = 7'b0010111;
    localparam logic [6:0] OP_SYSTEM   = 7'b1110011;

    // Funct3 for branches
    localparam logic [2:0] F3_BEQ  = 3'b000;
    localparam logic [2:0] F3_BNE  = 3'b001;
    localparam logic [2:0] F3_BLT  = 3'b100;
    localparam logic [2:0] F3_BGE  = 3'b101;
    localparam logic [2:0] F3_BLTU = 3'b110;
    localparam logic [2:0] F3_BGEU = 3'b111;

    // Funct3 for load/store
    localparam logic [2:0] F3_BYTE   = 3'b000;
    localparam logic [2:0] F3_HALF   = 3'b001;
    localparam logic [2:0] F3_WORD   = 3'b010;
    localparam logic [2:0] F3_DOUBLE = 3'b011;
    localparam logic [2:0] F3_BYTEU  = 3'b100;
    localparam logic [2:0] F3_HALFU  = 3'b101;
    localparam logic [2:0] F3_WORDU  = 3'b110;

    // Funct3 for ALU operations
    localparam logic [2:0] F3_ADD_SUB = 3'b000;
    localparam logic [2:0] F3_SLL     = 3'b001;
    localparam logic [2:0] F3_SLT     = 3'b010;
    localparam logic [2:0] F3_SLTU    = 3'b011;
    localparam logic [2:0] F3_XOR     = 3'b100;
    localparam logic [2:0] F3_SRL_SRA = 3'b101;
    localparam logic [2:0] F3_OR      = 3'b110;
    localparam logic [2:0] F3_AND     = 3'b111;

    // Funct7 values
    localparam logic [6:0] F7_NORMAL = 7'b0000000;
    localparam logic [6:0] F7_ALT    = 7'b0100000;  // SUB, SRA
    localparam logic [6:0] F7_ZBA_SH = 7'b0010000;  // SH1ADD, SH2ADD, SH3ADD
    localparam logic [6:0] F7_ZBA_UW = 7'b0000100;  // ADD.UW

    // Funct6 for SLLI.UW
    localparam logic [5:0] F6_SLLI_UW = 6'b000010;

    // Immediate type
    typedef enum logic [2:0] {
        IMM_I = 3'b000,
        IMM_S = 3'b001,
        IMM_B = 3'b010,
        IMM_U = 3'b011,
        IMM_J = 3'b100
    } imm_type_t;

    // NOP instruction (ADDI x0, x0, 0)
    localparam logic [31:0] NOP_INSTR = 32'h00000013;

endpackage
