module ex_stage
    import riscv_pkg::*;
(
    // From ID/EX register
    input  id_ex_reg_t  id_ex_reg,
    // Outputs
    output logic [63:0] alu_result,
    output logic [63:0] branch_target,
    output logic [63:0] jalr_target,
    output logic        branch_taken,
    output logic        jump
);

    logic [63:0] operand_a;
    logic [63:0] operand_b;
    logic        branch_condition;

    // ALU operand A selection
    always_comb begin
        case (id_ex_reg.ctrl.alu_src_a)
            ALU_SRC_A_RS1:  operand_a = id_ex_reg.rs1_data;
            ALU_SRC_A_PC:   operand_a = id_ex_reg.pc;
            ALU_SRC_A_ZERO: operand_a = 64'd0;
            default:        operand_a = id_ex_reg.rs1_data;
        endcase
    end

    // ALU operand B selection
    always_comb begin
        case (id_ex_reg.ctrl.alu_src_b)
            ALU_SRC_B_RS2: operand_b = id_ex_reg.rs2_data;
            ALU_SRC_B_IMM: operand_b = id_ex_reg.imm;
            ALU_SRC_B_4:   operand_b = 64'd4;
            default:       operand_b = id_ex_reg.rs2_data;
        endcase
    end

    // ALU
    alu u_alu (
        .operand_a (operand_a),
        .operand_b (operand_b),
        .alu_op    (id_ex_reg.ctrl.alu_op),
        .result    (alu_result)
    );

    // Branch target calculation (PC + immediate)
    assign branch_target = id_ex_reg.pc + id_ex_reg.imm;

    // JALR target calculation (rs1 + immediate)
    assign jalr_target = id_ex_reg.rs1_data + id_ex_reg.imm;

    // Branch condition evaluation
    always_comb begin
        case (id_ex_reg.funct3)
            F3_BEQ:  branch_condition = (id_ex_reg.rs1_data == id_ex_reg.rs2_data);
            F3_BNE:  branch_condition = (id_ex_reg.rs1_data != id_ex_reg.rs2_data);
            F3_BLT:  branch_condition = ($signed(id_ex_reg.rs1_data) < $signed(id_ex_reg.rs2_data));
            F3_BGE:  branch_condition = ($signed(id_ex_reg.rs1_data) >= $signed(id_ex_reg.rs2_data));
            F3_BLTU: branch_condition = (id_ex_reg.rs1_data < id_ex_reg.rs2_data);
            F3_BGEU: branch_condition = (id_ex_reg.rs1_data >= id_ex_reg.rs2_data);
            default: branch_condition = 1'b0;
        endcase
    end

    // Branch taken signal
    assign branch_taken = id_ex_reg.valid && id_ex_reg.ctrl.branch && branch_condition;

    // Jump signal
    assign jump = id_ex_reg.valid && id_ex_reg.ctrl.jump;

endmodule
