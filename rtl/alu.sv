module alu
    import riscv_pkg::*;
(
    input  logic [63:0] operand_a,
    input  logic [63:0] operand_b,
    input  alu_op_t     alu_op,
    output logic [63:0] result
);

    logic [63:0] add_result;
    logic [63:0] sub_result;
    logic [31:0] word_result;
    logic [63:0] shift_amount;
    logic [4:0]  shift_amount_w;

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
            ALU_SRA:     result = $signed(operand_a) >>> shift_amount;
            ALU_OR:      result = operand_a | operand_b;
            ALU_AND:     result = operand_a & operand_b;
            ALU_PASS_B:  result = operand_b;

            // RV64I word operations (32-bit with sign extension)
            ALU_ADDW: begin
                word_result = operand_a[31:0] + operand_b[31:0];
                result = sext_w(word_result);
            end
            ALU_SUBW: begin
                word_result = operand_a[31:0] - operand_b[31:0];
                result = sext_w(word_result);
            end
            ALU_SLLW: begin
                word_result = operand_a[31:0] << shift_amount_w;
                result = sext_w(word_result);
            end
            ALU_SRLW: begin
                word_result = operand_a[31:0] >> shift_amount_w;
                result = sext_w(word_result);
            end
            ALU_SRAW: begin
                word_result = $signed(operand_a[31:0]) >>> shift_amount_w;
                result = sext_w(word_result);
            end

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
