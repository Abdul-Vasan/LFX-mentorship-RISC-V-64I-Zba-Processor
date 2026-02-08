// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_processor__Syms.h"


VL_ATTR_COLD void Vtb_processor___024root__trace_init_sub__TOP__riscv_pkg__0(Vtb_processor___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_processor___024root__trace_init_sub__TOP__0(Vtb_processor___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root__trace_init_sub__TOP__0\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("riscv_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_processor___024root__trace_init_sub__TOP__riscv_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_processor", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+203,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"TIMEOUT_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"IMEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"DMEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+189,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1,0,"imem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+191,0,"imem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+3,0,"dmem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"dmem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+7,0,"dmem_byte_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+8,0,"dmem_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+192,0,"dmem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+9,0,"ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("u_dmem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+206,0,"MEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+189,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+3,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+7,0,"byte_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+8,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+192,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+189,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1,0,"imem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+191,0,"imem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+3,0,"dmem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"dmem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+7,0,"dmem_byte_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+8,0,"dmem_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+192,0,"dmem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+9,0,"ecall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1,0,"if_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+191,0,"if_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+207,0,"if_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+11,0,"if_id_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 96,0);
    tracep->declQuad(c+15,0,"id_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17,0,"id_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+19,0,"id_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+21,0,"id_rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+22,0,"id_rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"id_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"id_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+25,0,"id_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+26,0,"id_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+27,0,"id_ex_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 295,0);
    tracep->declQuad(c+37,0,"ex_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+39,0,"ex_branch_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+41,0,"ex_jalr_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+43,0,"ex_branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"ex_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+45,0,"ex_mem_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 208,0);
    tracep->declQuad(c+195,0,"mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+52,0,"mem_wb_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 135,0);
    tracep->declBus(c+57,0,"wb_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+58,0,"wb_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+60,0,"wb_rd_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"stall_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"stall_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"flush_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"flush_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_ex_mem_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+189,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+64,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+37,0,"alu_result_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+66,0,"rs2_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+68,0,"rd_addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+69,0,"funct3_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+70,0,"mem_read_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"mem_write_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"mem_to_reg_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"reg_write_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"mem_size_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+75,0,"mem_unsigned_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+45,0,"reg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 208,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ex_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+27,0,"id_ex_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 295,0);
    tracep->declQuad(c+37,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+39,0,"branch_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+41,0,"jalr_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+43,0,"branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+77,0,"operand_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+79,0,"operand_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+81,0,"branch_condition",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+77,0,"operand_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+79,0,"operand_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+82,0,"alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+37,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+83,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+85,0,"sub_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+87,0,"word_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+88,0,"shift_amount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+90,0,"shift_amount_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_hazard_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+21,0,"rs1_addr_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+22,0,"rs2_addr_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+68,0,"rd_addr_ex",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+73,0,"reg_write_ex",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"mem_read_ex",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"valid_ex",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"rd_addr_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+92,0,"reg_write_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"valid_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"rd_addr_wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+94,0,"reg_write_wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"valid_wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"stall_if",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"stall_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"flush_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"flush_ex",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"rs1_hazard_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"rs2_hazard_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"rs1_hazard_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"rs2_hazard_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"rs1_hazard_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"rs2_hazard_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"data_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_id_ex_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+189,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+102,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+15,0,"rs1_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17,0,"rs2_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+19,0,"imm_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+21,0,"rs1_addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+22,0,"rs2_addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"rd_addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"funct3_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+25,0,"ctrl_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+104,0,"valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+27,0,"reg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 295,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_id_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+189,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+11,0,"if_id_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 96,0);
    tracep->declBus(c+57,0,"rd_addr_wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+58,0,"rd_data_wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+60,0,"rd_wen_wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+15,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+19,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+21,0,"rs1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+22,0,"rs2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+25,0,"ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+26,0,"ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+106,0,"imm_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+107,0,"illegal_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+108,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"rs1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+22,0,"rs2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+105,0,"funct7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+106,0,"imm_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+25,0,"ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+107,0,"illegal_instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_imm_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+108,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"imm_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+19,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+110,0,"imm_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+112,0,"imm_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+114,0,"imm_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+116,0,"imm_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+118,0,"imm_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+189,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+22,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+15,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+57,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+58,0,"rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+60,0,"rd_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 31; ++i) {
        tracep->declQuad(c+120+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+1), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+197,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_if_id_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+189,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+191,0,"instr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+207,0,"valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+11,0,"reg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 96,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_if_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+189,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"is_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+39,0,"branch_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+41,0,"jalr_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1,0,"imem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+191,0,"imem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+1,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+191,0,"instr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+207,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1,0,"pc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+183,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mem_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+45,0,"ex_mem_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 208,0);
    tracep->declQuad(c+3,0,"dmem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"dmem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+7,0,"dmem_byte_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+8,0,"dmem_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+192,0,"dmem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+195,0,"mem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+185,0,"byte_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+208,0,"aligned_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+198,0,"aligned_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mem_wb_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+189,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+186,0,"alu_result_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+195,0,"mem_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+91,0,"rd_addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+188,0,"mem_to_reg_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"reg_write_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+52,0,"reg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 135,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_wb_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+52,0,"mem_wb_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 135,0);
    tracep->declBus(c+57,0,"rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+58,0,"rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+60,0,"rd_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_imem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+205,0,"MEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+210,0,"INIT_FILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+191,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+200,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+201,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+202,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_processor___024root__trace_init_sub__TOP__riscv_pkg__0(Vtb_processor___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root__trace_init_sub__TOP__riscv_pkg__0\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+212,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"ILEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"OP_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+215,0,"OP_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+216,0,"OP_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+217,0,"OP_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+218,0,"OP_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+219,0,"OP_IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+220,0,"OP_IMM_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+221,0,"OP_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+222,0,"OP_REG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+223,0,"OP_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+224,0,"OP_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+225,0,"OP_SYSTEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+226,0,"F3_BEQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+227,0,"F3_BNE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+228,0,"F3_BLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+229,0,"F3_BGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+230,0,"F3_BLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+231,0,"F3_BGEU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+226,0,"F3_BYTE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+227,0,"F3_HALF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+232,0,"F3_WORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+233,0,"F3_DOUBLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+228,0,"F3_BYTEU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+229,0,"F3_HALFU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+230,0,"F3_WORDU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+226,0,"F3_ADD_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+227,0,"F3_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+232,0,"F3_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+233,0,"F3_SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+228,0,"F3_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+229,0,"F3_SRL_SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+230,0,"F3_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+231,0,"F3_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+234,0,"F7_NORMAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+235,0,"F7_ALT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+236,0,"F7_ZBA_SH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+237,0,"F7_ZBA_UW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+238,0,"F6_SLLI_UW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+239,0,"NOP_INSTR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_processor___024root__trace_init_top(Vtb_processor___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root__trace_init_top\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_processor___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_processor___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_processor___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_processor___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_processor___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_processor___024root__trace_register(Vtb_processor___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root__trace_register\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_processor___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_processor___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_processor___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_processor___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_processor___024root__trace_const_0_sub_0(Vtb_processor___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_processor___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root__trace_const_0\n"); );
    // Body
    Vtb_processor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_processor___024root*>(voidSelf);
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_processor___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_processor___024root__trace_const_0_sub_0(Vtb_processor___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root__trace_const_0_sub_0\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+203,(0x0000000aU),32);
    bufp->fullIData(oldp+204,(0x00002710U),32);
    bufp->fullIData(oldp+205,(0x00001000U),32);
    bufp->fullIData(oldp+206,(0x00002000U),32);
    bufp->fullBit(oldp+207,(1U));
    bufp->fullQData(oldp+208,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_mem_stage__DOT__aligned_wdata),64);
    bufp->fullQData(oldp+210,(0x746573742e686578ULL),64);
    bufp->fullIData(oldp+212,(0x00000040U),32);
    bufp->fullIData(oldp+213,(0x00000020U),32);
    bufp->fullCData(oldp+214,(3U),7);
    bufp->fullCData(oldp+215,(0x23U),7);
    bufp->fullCData(oldp+216,(0x63U),7);
    bufp->fullCData(oldp+217,(0x6fU),7);
    bufp->fullCData(oldp+218,(0x67U),7);
    bufp->fullCData(oldp+219,(0x13U),7);
    bufp->fullCData(oldp+220,(0x1bU),7);
    bufp->fullCData(oldp+221,(0x33U),7);
    bufp->fullCData(oldp+222,(0x3bU),7);
    bufp->fullCData(oldp+223,(0x37U),7);
    bufp->fullCData(oldp+224,(0x17U),7);
    bufp->fullCData(oldp+225,(0x73U),7);
    bufp->fullCData(oldp+226,(0U),3);
    bufp->fullCData(oldp+227,(1U),3);
    bufp->fullCData(oldp+228,(4U),3);
    bufp->fullCData(oldp+229,(5U),3);
    bufp->fullCData(oldp+230,(6U),3);
    bufp->fullCData(oldp+231,(7U),3);
    bufp->fullCData(oldp+232,(2U),3);
    bufp->fullCData(oldp+233,(3U),3);
    bufp->fullCData(oldp+234,(0U),7);
    bufp->fullCData(oldp+235,(0x20U),7);
    bufp->fullCData(oldp+236,(0x10U),7);
    bufp->fullCData(oldp+237,(4U),7);
    bufp->fullCData(oldp+238,(2U),6);
    bufp->fullIData(oldp+239,(0x00000013U),32);
}

VL_ATTR_COLD void Vtb_processor___024root__trace_full_0_sub_0(Vtb_processor___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_processor___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root__trace_full_0\n"); );
    // Body
    Vtb_processor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_processor___024root*>(voidSelf);
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_processor___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_processor___024root__trace_full_0_sub_0(Vtb_processor___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root__trace_full_0_sub_0\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullQData(oldp+1,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_if_stage__DOT__pc_reg),64);
    bufp->fullQData(oldp+3,((0xfffffffffffffff8ULL 
                             & (((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[4U])) 
                                 << 0x0000002fU) | 
                                (((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[3U])) 
                                  << 0x0000000fU) | 
                                 (0x00007ffffffffff8ULL 
                                  & ((QData)((IData)(
                                                     vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U])) 
                                     >> 0x00000011U)))))),64);
    bufp->fullQData(oldp+5,(vlSelfRef.tb_processor__DOT__dmem_wdata),64);
    bufp->fullCData(oldp+7,(vlSelfRef.tb_processor__DOT__dmem_byte_en),8);
    bufp->fullBit(oldp+8,((IData)((0x00000081U == (0x00000081U 
                                                   & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U])))));
    bufp->fullBit(oldp+9,(((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ecall) 
                           & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])));
    bufp->fullIData(oldp+10,(vlSelfRef.tb_processor__DOT__cycle_count),32);
    bufp->fullWData(oldp+11,(vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg),97);
    bufp->fullQData(oldp+15,(((0U == (0x0000001fU & 
                                      (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                       >> 0x00000010U)))
                               ? 0ULL : ((0x1eU >= 
                                          (0x0000001fU 
                                           & (((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                  >> 0x00000010U)) 
                                              - (IData)(1U))))
                                          ? vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                                         [(0x0000001fU 
                                           & (((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                  >> 0x00000010U)) 
                                              - (IData)(1U)))]
                                          : 0ULL))),64);
    bufp->fullQData(oldp+17,(((0U == (0x0000001fU & 
                                      (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                       >> 0x00000015U)))
                               ? 0ULL : ((0x1eU >= 
                                          (0x0000001fU 
                                           & (((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                << 0x0000000bU) 
                                               | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                  >> 0x00000015U)) 
                                              - (IData)(1U))))
                                          ? vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                                         [(0x0000001fU 
                                           & (((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                << 0x0000000bU) 
                                               | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                  >> 0x00000015U)) 
                                              - (IData)(1U)))]
                                          : 0ULL))),64);
    bufp->fullQData(oldp+19,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_imm_gen__DOT__imm),64);
    bufp->fullCData(oldp+21,((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                             >> 0x00000010U))),5);
    bufp->fullCData(oldp+22,((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                             >> 0x00000015U))),5);
    bufp->fullCData(oldp+23,((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                             >> 8U))),5);
    bufp->fullCData(oldp+24,((7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                    >> 0x0000000dU))),3);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl),21);
    bufp->fullBit(oldp+26,(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ecall));
    bufp->fullWData(oldp+27,(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg),296);
    bufp->fullQData(oldp+37,(vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_alu_result),64);
    bufp->fullQData(oldp+39,(((((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[9U])) 
                                << 0x00000038U) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[8U])) 
                                                    << 0x00000018U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                                      >> 8U))) 
                              + (((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                  << 0x00000038U) | 
                                 (((QData)((IData)(
                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[2U])) 
                                   << 0x00000018U) 
                                  | ((QData)((IData)(
                                                     vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[1U])) 
                                     >> 8U))))),64);
    bufp->fullQData(oldp+41,(((((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                << 0x00000038U) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[6U])) 
                                                    << 0x00000018U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                                      >> 8U))) 
                              + (((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                  << 0x00000038U) | 
                                 (((QData)((IData)(
                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[2U])) 
                                   << 0x00000018U) 
                                  | ((QData)((IData)(
                                                     vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[1U])) 
                                     >> 8U))))),64);
    bufp->fullBit(oldp+43,((vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                            & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                >> 8U) & ((0x01000000U 
                                           & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                                           ? ((0x00800000U 
                                               & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                                               ? ((0x00400000U 
                                                   & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                                                   ? 
                                                  ((((QData)((IData)(
                                                                     vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                                     << 0x00000038U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[6U])) 
                                                        << 0x00000018U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                                          >> 8U))) 
                                                   >= 
                                                   (((QData)((IData)(
                                                                     vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                                     << 0x00000038U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U])) 
                                                        << 0x00000018U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                                          >> 8U))))
                                                   : 
                                                  ((((QData)((IData)(
                                                                     vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                                     << 0x00000038U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[6U])) 
                                                        << 0x00000018U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                                          >> 8U))) 
                                                   < 
                                                   (((QData)((IData)(
                                                                     vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                                     << 0x00000038U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U])) 
                                                        << 0x00000018U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                                          >> 8U)))))
                                               : ((0x00400000U 
                                                   & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                                                   ? 
                                                  VL_GTES_IQQ(64, 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                                                << 0x00000038U) 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[6U])) 
                                                                   << 0x00000018U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                                                     >> 8U))), 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                                                << 0x00000038U) 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U])) 
                                                                   << 0x00000018U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                                                     >> 8U))))
                                                   : 
                                                  VL_LTS_IQQ(64, 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                                               << 0x00000038U) 
                                                              | (((QData)((IData)(
                                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[6U])) 
                                                                  << 0x00000018U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                                                    >> 8U))), 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                                               << 0x00000038U) 
                                                              | (((QData)((IData)(
                                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U])) 
                                                                  << 0x00000018U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                                                    >> 8U))))))
                                           : ((~ (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                                  >> 0x00000017U)) 
                                              & ((0x00400000U 
                                                  & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                                                  ? 
                                                 ((((QData)((IData)(
                                                                    vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[6U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                                         >> 8U))) 
                                                  != 
                                                  (((QData)((IData)(
                                                                    vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                                         >> 8U))))
                                                  : 
                                                 ((((QData)((IData)(
                                                                    vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[6U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                                         >> 8U))) 
                                                  == 
                                                  (((QData)((IData)(
                                                                    vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                                         >> 8U)))))))))));
    bufp->fullBit(oldp+44,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__jump));
    bufp->fullWData(oldp+45,(vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg),209);
    bufp->fullWData(oldp+52,(vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg),136);
    bufp->fullCData(oldp+57,((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
                                             >> 3U))),5);
    bufp->fullQData(oldp+58,(((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U])
                               ? (((QData)((IData)(
                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[2U])) 
                                   << 0x00000038U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[1U])) 
                                      << 0x00000018U) 
                                     | ((QData)((IData)(
                                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U])) 
                                        >> 8U))) : 
                              (((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[4U])) 
                                << 0x00000038U) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[3U])) 
                                                    << 0x00000018U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[2U])) 
                                                      >> 8U))))),64);
    bufp->fullBit(oldp+60,((IData)((3U == (3U & vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U])))));
    bufp->fullBit(oldp+61,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__stall_if));
    bufp->fullBit(oldp+62,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__flush_id));
    bufp->fullBit(oldp+63,(((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__flush_id) 
                            | (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__stall_if))));
    bufp->fullQData(oldp+64,((((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[9U])) 
                               << 0x00000038U) | (((QData)((IData)(
                                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[8U])) 
                                                   << 0x00000018U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                                     >> 8U)))),64);
    bufp->fullQData(oldp+66,((((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                               << 0x00000038U) | (((QData)((IData)(
                                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U])) 
                                                   << 0x00000018U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                                     >> 8U)))),64);
    bufp->fullCData(oldp+68,((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                             >> 0x00000019U))),5);
    bufp->fullCData(oldp+69,((7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                    >> 0x00000016U))),3);
    bufp->fullBit(oldp+70,((1U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                  >> 0x0000000cU))));
    bufp->fullBit(oldp+71,((1U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                  >> 0x0000000bU))));
    bufp->fullBit(oldp+72,((1U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                  >> 0x0000000aU))));
    bufp->fullBit(oldp+73,((1U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                  >> 9U))));
    bufp->fullCData(oldp+74,((7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                    >> 3U))),3);
    bufp->fullBit(oldp+75,((1U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                  >> 2U))));
    bufp->fullBit(oldp+76,((1U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])));
    bufp->fullQData(oldp+77,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a),64);
    bufp->fullQData(oldp+79,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b),64);
    bufp->fullBit(oldp+81,(((0x01000000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                             ? ((0x00800000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                                 ? ((0x00400000U & 
                                     vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                                     ? ((((QData)((IData)(
                                                          vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                          << 0x00000038U) 
                                         | (((QData)((IData)(
                                                             vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[6U])) 
                                             << 0x00000018U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                               >> 8U))) 
                                        >= (((QData)((IData)(
                                                             vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                             << 0x00000038U) 
                                            | (((QData)((IData)(
                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U])) 
                                                << 0x00000018U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                                  >> 8U))))
                                     : ((((QData)((IData)(
                                                          vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                          << 0x00000038U) 
                                         | (((QData)((IData)(
                                                             vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[6U])) 
                                             << 0x00000018U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                               >> 8U))) 
                                        < (((QData)((IData)(
                                                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                            << 0x00000038U) 
                                           | (((QData)((IData)(
                                                               vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U])) 
                                               << 0x00000018U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                                 >> 8U)))))
                                 : ((0x00400000U & 
                                     vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                                     ? VL_GTES_IQQ(64, 
                                                   (((QData)((IData)(
                                                                     vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                                     << 0x00000038U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[6U])) 
                                                        << 0x00000018U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                                          >> 8U))), 
                                                   (((QData)((IData)(
                                                                     vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                                     << 0x00000038U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U])) 
                                                        << 0x00000018U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                                          >> 8U))))
                                     : VL_LTS_IQQ(64, 
                                                  (((QData)((IData)(
                                                                    vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[6U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                                         >> 8U))), 
                                                  (((QData)((IData)(
                                                                    vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                                         >> 8U))))))
                             : ((~ (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                    >> 0x00000017U)) 
                                & ((0x00400000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                                    ? ((((QData)((IData)(
                                                         vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                         << 0x00000038U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[6U])) 
                                            << 0x00000018U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                              >> 8U))) 
                                       != (((QData)((IData)(
                                                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                            << 0x00000038U) 
                                           | (((QData)((IData)(
                                                               vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U])) 
                                               << 0x00000018U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                                 >> 8U))))
                                    : ((((QData)((IData)(
                                                         vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                         << 0x00000038U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[6U])) 
                                            << 0x00000018U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                              >> 8U))) 
                                       == (((QData)((IData)(
                                                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                            << 0x00000038U) 
                                           | (((QData)((IData)(
                                                               vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U])) 
                                               << 0x00000018U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                                 >> 8U)))))))));
    bufp->fullCData(oldp+82,((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                             >> 0x00000011U))),5);
    bufp->fullQData(oldp+83,((vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a 
                              + vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b)),64);
    bufp->fullQData(oldp+85,((vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a 
                              - vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b)),64);
    bufp->fullIData(oldp+87,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__word_result),32);
    bufp->fullQData(oldp+88,((QData)((IData)((0x0000003fU 
                                              & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b))))),64);
    bufp->fullCData(oldp+90,((0x0000001fU & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b))),5);
    bufp->fullCData(oldp+91,((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
                                             >> 0x0000000cU))),5);
    bufp->fullBit(oldp+92,((1U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
                                  >> 5U))));
    bufp->fullBit(oldp+93,((1U & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U])));
    bufp->fullBit(oldp+94,((1U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+95,((1U & vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U])));
    bufp->fullBit(oldp+96,(((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_2) 
                            & ((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                               >> 0x00000019U)) 
                               == (0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                  >> 0x00000010U))))));
    bufp->fullBit(oldp+97,(((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_2) 
                            & ((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                               >> 0x00000019U)) 
                               == (0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                  >> 0x00000015U))))));
    bufp->fullBit(oldp+98,(((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_1) 
                            & ((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
                                               >> 0x0000000cU)) 
                               == (0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                  >> 0x00000010U))))));
    bufp->fullBit(oldp+99,(((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_1) 
                            & ((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
                                               >> 0x0000000cU)) 
                               == (0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                  >> 0x00000015U))))));
    bufp->fullBit(oldp+100,(((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_0) 
                             & ((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
                                                >> 3U)) 
                                == (0x0000001fU & (
                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                   >> 0x00000010U))))));
    bufp->fullBit(oldp+101,(((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_0) 
                             & ((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
                                                >> 3U)) 
                                == (0x0000001fU & (
                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                   >> 0x00000015U))))));
    bufp->fullQData(oldp+102,((((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[3U])) 
                                << 0x0000003fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[2U])) 
                                                    << 0x0000001fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U])) 
                                                      >> 1U)))),64);
    bufp->fullBit(oldp+104,((1U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])));
    bufp->fullCData(oldp+105,((0x0000007fU & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                               << 6U) 
                                              | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                 >> 0x0000001aU)))),7);
    bufp->fullCData(oldp+106,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__imm_type),3);
    bufp->fullBit(oldp+107,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr));
    bufp->fullIData(oldp+108,(((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                << 0x0000001fU) | (
                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                   >> 1U))),32);
    bufp->fullCData(oldp+109,((0x0000007fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                              >> 1U))),7);
    bufp->fullQData(oldp+110,((((- (QData)((IData)(
                                                   (1U 
                                                    & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U])))) 
                                << 0x0000000cU) | (QData)((IData)(
                                                                  (0x00000fffU 
                                                                   & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                                                       << 0x0000000bU) 
                                                                      | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                                         >> 0x00000015U))))))),64);
    bufp->fullQData(oldp+112,((((- (QData)((IData)(
                                                   (1U 
                                                    & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U])))) 
                                << 0x0000000cU) | (QData)((IData)(
                                                                  ((0x00000fe0U 
                                                                    & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                                                        << 0x0000000bU) 
                                                                       | (0x000007e0U 
                                                                          & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                                             >> 0x00000015U)))) 
                                                                   | (0x0000001fU 
                                                                      & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                                         >> 8U))))))),64);
    bufp->fullQData(oldp+114,((((- (QData)((IData)(
                                                   (1U 
                                                    & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U])))) 
                                << 0x0000000dU) | (QData)((IData)(
                                                                  ((((2U 
                                                                      & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                                                         << 1U)) 
                                                                     | (1U 
                                                                        & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                                           >> 8U))) 
                                                                    << 0x0000000bU) 
                                                                   | ((0x000007e0U 
                                                                       & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                                          >> 0x00000015U)) 
                                                                      | (0x0000001eU 
                                                                         & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                                            >> 8U)))))))),64);
    bufp->fullQData(oldp+116,((((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U]))))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                                                       << 0x0000001fU) 
                                                                      | (0x7ffff000U 
                                                                         & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                                            >> 1U)))))))),64);
    bufp->fullQData(oldp+118,((((- (QData)((IData)(
                                                   (1U 
                                                    & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U])))) 
                                << 0x00000015U) | (QData)((IData)(
                                                                  ((((0x00000200U 
                                                                      & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                                                         << 9U)) 
                                                                     | ((0x000001feU 
                                                                         & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                                            >> 0x0000000cU)) 
                                                                        | (1U 
                                                                           & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                                              >> 0x00000015U)))) 
                                                                    << 0x0000000bU) 
                                                                   | (0x000007feU 
                                                                      & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                                         >> 0x00000015U))))))),64);
    bufp->fullQData(oldp+120,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0]),64);
    bufp->fullQData(oldp+122,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[1]),64);
    bufp->fullQData(oldp+124,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[2]),64);
    bufp->fullQData(oldp+126,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[3]),64);
    bufp->fullQData(oldp+128,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[4]),64);
    bufp->fullQData(oldp+130,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[5]),64);
    bufp->fullQData(oldp+132,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[6]),64);
    bufp->fullQData(oldp+134,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[7]),64);
    bufp->fullQData(oldp+136,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[8]),64);
    bufp->fullQData(oldp+138,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[9]),64);
    bufp->fullQData(oldp+140,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[10]),64);
    bufp->fullQData(oldp+142,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[11]),64);
    bufp->fullQData(oldp+144,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[12]),64);
    bufp->fullQData(oldp+146,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[13]),64);
    bufp->fullQData(oldp+148,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[14]),64);
    bufp->fullQData(oldp+150,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[15]),64);
    bufp->fullQData(oldp+152,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[16]),64);
    bufp->fullQData(oldp+154,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[17]),64);
    bufp->fullQData(oldp+156,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[18]),64);
    bufp->fullQData(oldp+158,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[19]),64);
    bufp->fullQData(oldp+160,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[20]),64);
    bufp->fullQData(oldp+162,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[21]),64);
    bufp->fullQData(oldp+164,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[22]),64);
    bufp->fullQData(oldp+166,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[23]),64);
    bufp->fullQData(oldp+168,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[24]),64);
    bufp->fullQData(oldp+170,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[25]),64);
    bufp->fullQData(oldp+172,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[26]),64);
    bufp->fullQData(oldp+174,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[27]),64);
    bufp->fullQData(oldp+176,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[28]),64);
    bufp->fullQData(oldp+178,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[29]),64);
    bufp->fullQData(oldp+180,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[30]),64);
    bufp->fullBit(oldp+182,((1U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                   >> 6U))));
    bufp->fullQData(oldp+183,((((vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                 >> 6U) & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__jump))
                                ? (0xfffffffffffffffeULL 
                                   & ((((QData)((IData)(
                                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                        << 0x00000038U) 
                                       | (((QData)((IData)(
                                                           vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[6U])) 
                                           << 0x00000018U) 
                                          | ((QData)((IData)(
                                                             vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                             >> 8U))) 
                                      + (((QData)((IData)(
                                                          vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                          << 0x00000038U) 
                                         | (((QData)((IData)(
                                                             vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[2U])) 
                                             << 0x00000018U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[1U])) 
                                               >> 8U)))))
                                : ((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__flush_id)
                                    ? ((((QData)((IData)(
                                                         vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[9U])) 
                                         << 0x00000038U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[8U])) 
                                            << 0x00000018U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                              >> 8U))) 
                                       + (((QData)((IData)(
                                                           vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                           << 0x00000038U) 
                                          | (((QData)((IData)(
                                                              vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[2U])) 
                                              << 0x00000018U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[1U])) 
                                                >> 8U))))
                                    : (4ULL + vlSelfRef.tb_processor__DOT__u_dut__DOT__u_if_stage__DOT__pc_reg)))),64);
    bufp->fullCData(oldp+185,((7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                     >> 0x00000011U))),3);
    bufp->fullQData(oldp+186,((((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[4U])) 
                                << 0x0000002fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[3U])) 
                                                    << 0x0000000fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U])) 
                                                      >> 0x00000011U)))),64);
    bufp->fullBit(oldp+188,((1U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
                                   >> 6U))));
    bufp->fullBit(oldp+189,(vlSelfRef.tb_processor__DOT__clk));
    bufp->fullBit(oldp+190,(vlSelfRef.tb_processor__DOT__rst_n));
    bufp->fullIData(oldp+191,(vlSelfRef.tb_processor__DOT__u_imem__DOT__mem
                              [(0x00000fffU & (IData)(
                                                      (vlSelfRef.tb_processor__DOT__u_dut__DOT__u_if_stage__DOT__pc_reg 
                                                       >> 2U)))]),32);
    bufp->fullQData(oldp+192,((((QData)((IData)((((
                                                   vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                                                   [
                                                   (0x00001fffU 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (0x00001ff8U 
                                                        & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                                           >> 0x00000011U))))] 
                                                   << 0x00000018U) 
                                                  | (vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                                                     [
                                                     (0x00001fffU 
                                                      & ((IData)(6U) 
                                                         + 
                                                         (0x00001ff8U 
                                                          & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                                             >> 0x00000011U))))] 
                                                     << 0x00000010U)) 
                                                 | ((vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                                                     [
                                                     (0x00001fffU 
                                                      & ((IData)(5U) 
                                                         + 
                                                         (0x00001ff8U 
                                                          & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                                             >> 0x00000011U))))] 
                                                     << 8U) 
                                                    | vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                                                    [
                                                    (0x00001fffU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        (0x00001ff8U 
                                                         & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                                            >> 0x00000011U))))])))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  (((vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                                                                     [
                                                                     (0x00001fffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (0x00001ff8U 
                                                                          & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                                                             >> 0x00000011U))))] 
                                                                     << 0x00000018U) 
                                                                    | (vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                                                                       [
                                                                       (0x00001fffU 
                                                                        & ((IData)(2U) 
                                                                           + 
                                                                           (0x00001ff8U 
                                                                            & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                                                               >> 0x00000011U))))] 
                                                                       << 0x00000010U)) 
                                                                   | ((vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                                                                       [
                                                                       (0x00001fffU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0x00001ff8U 
                                                                            & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                                                               >> 0x00000011U))))] 
                                                                       << 8U) 
                                                                      | vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                                                                      [
                                                                      (0x00001ff8U 
                                                                       & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                                                          >> 0x00000011U))])))))),64);
    bufp->fullIData(oldp+194,(vlSelfRef.tb_processor__DOT__u_dmem__DOT__unnamedblk1__DOT__i),32);
    bufp->fullQData(oldp+195,(vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_rdata),64);
    bufp->fullIData(oldp+197,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullQData(oldp+198,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_mem_stage__DOT__aligned_rdata),64);
    bufp->fullIData(oldp+200,(vlSelfRef.tb_processor__DOT__u_imem__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+201,(vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+202,(vlSelfRef.tb_processor__DOT__unnamedblk2__DOT__i),32);
}
