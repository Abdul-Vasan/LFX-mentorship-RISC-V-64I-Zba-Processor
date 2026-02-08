//==============================================================================
// Module: alu
// Description: 64-bit Arithmetic Logic Unit with Zba extension support
//
// Supported Operations:
//   RV64I Base: ADD, SUB, AND, OR, XOR, SLL, SRL, SRA, SLT, SLTU
//   RV64I Word: ADDW, SUBW, SLLW, SRLW, SRAW (32-bit with sign-extension)
//   Zba Extension: SH1ADD, SH2ADD, SH3ADD (shift-and-add for array indexing)
//                  ADD.UW, SLLI.UW (unsigned word operations)
//                  SH1ADD.UW, SH2ADD.UW, SH3ADD.UW
//
// Zba Instructions Usage:
//   SH1ADD: Array indexing for 16-bit elements (addr = base + index*2)
//   SH2ADD: Array indexing for 32-bit elements (addr = base + index*4)
//   SH3ADD: Array indexing for 64-bit elements (addr = base + index*8)
//==============================================================================
module alu
    import riscv_pkg::*;
(
    input  logic [63:0] operand_a,  // First operand (typically rs1)
    input  logic [63:0] operand_b,  // Second operand (rs2 or immediate)
    input  alu_op_t     alu_op,     // Operation select
    output logic [63:0] result      // Computation result
);

    logic [63:0] add_result;
    logic [63:0] sub_result;
    logic [5:0]  shift_amount;
    logic [4:0]  shift_amount_w;
    logic [63:0] sra_result;
    logic [31:0] sraw_result;

    assign sra_result = $unsigned($signed(operand_a) >>> shift_amount);
    assign sraw_result = $unsigned($signed(operand_a[31:0]) >>> shift_amount_w);

    assign add_result = operand_a + operand_b;
    assign sub_result = operand_a - operand_b;
    assign shift_amount = operand_b[5:0];
    assign shift_amount_w = operand_b[4:0];

    // Sign extension helper for word operations
    function automatic logic [63:0] sext_w(input logic [31:0] val);
        return {{32{val[31]}}, val};
    endfunction

    always_comb begin
        case (alu_op)
            ALU_ADD:     result = add_result;
            ALU_SUB:     result = sub_result;
            ALU_SLL:     result = operand_a << shift_amount;
            ALU_SLT:     result = ($signed(operand_a) < $signed(operand_b)) ? 64'd1 : 64'd0;
            ALU_SLTU:    result = (operand_a < operand_b) ? 64'd1 : 64'd0;
            ALU_XOR:     result = operand_a ^ operand_b;
            ALU_SRL:     result = operand_a >> shift_amount;
            ALU_SRA:     result = sra_result;
            ALU_OR:      result = operand_a | operand_b;
            ALU_AND:     result = operand_a & operand_b;
            ALU_PASS_B:  result = operand_b;

            // RV64I word operations (32-bit with sign extension)
            ALU_ADDW:    result = sext_w(operand_a[31:0] + operand_b[31:0]);
            ALU_SUBW:    result = sext_w(operand_a[31:0] - operand_b[31:0]);
            ALU_SLLW:    result = sext_w(operand_a[31:0] << shift_amount_w);
            ALU_SRLW:    result = sext_w(operand_a[31:0] >> shift_amount_w);
            ALU_SRAW:    result = sext_w(sraw_result);

            // Zba extension: shift-and-add
            ALU_SH1ADD:  result = operand_b + (operand_a << 1);
            ALU_SH2ADD:  result = operand_b + (operand_a << 2);
            ALU_SH3ADD:  result = operand_b + (operand_a << 3);

            // Zba extension: unsigned word operations
            ALU_ADD_UW:  result = operand_b + {32'd0, operand_a[31:0]};
            ALU_SLLI_UW: result = {32'd0, operand_a[31:0]} << shift_amount;

            // Zba extension: shift-and-add with unsigned word
            ALU_SH1ADDUW: result = operand_b + ({32'd0, operand_a[31:0]} << 1);
            ALU_SH2ADDUW: result = operand_b + ({32'd0, operand_a[31:0]} << 2);
            ALU_SH3ADDUW: result = operand_b + ({32'd0, operand_a[31:0]} << 3);

            default:     result = 64'd0;
        endcase
    end

endmodule
