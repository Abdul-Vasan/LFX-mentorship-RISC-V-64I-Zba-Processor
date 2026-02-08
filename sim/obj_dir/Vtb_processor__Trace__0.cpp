// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_processor__Syms.h"


void Vtb_processor___024root__trace_chg_0_sub_0(Vtb_processor___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_processor___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root__trace_chg_0\n"); );
    // Body
    Vtb_processor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_processor___024root*>(voidSelf);
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_processor___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_processor___024root__trace_chg_0_sub_0(Vtb_processor___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root__trace_chg_0_sub_0\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgQData(oldp+0,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_if_stage__DOT__pc_reg),64);
        bufp->chgQData(oldp+2,((0xfffffffffffffff8ULL 
                                & (((QData)((IData)(
                                                    vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[4U])) 
                                    << 0x0000002fU) 
                                   | (((QData)((IData)(
                                                       vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[3U])) 
                                       << 0x0000000fU) 
                                      | (0x00007ffffffffff8ULL 
                                         & ((QData)((IData)(
                                                            vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U])) 
                                            >> 0x00000011U)))))),64);
        bufp->chgQData(oldp+4,(vlSelfRef.tb_processor__DOT__dmem_wdata),64);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_processor__DOT__dmem_byte_en),8);
        bufp->chgBit(oldp+7,((IData)((0x00000081U == 
                                      (0x00000081U 
                                       & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U])))));
        bufp->chgBit(oldp+8,(((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ecall) 
                              & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])));
        bufp->chgIData(oldp+9,(vlSelfRef.tb_processor__DOT__cycle_count),32);
        bufp->chgWData(oldp+10,(vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg),97);
        bufp->chgQData(oldp+14,(((0U == (0x0000001fU 
                                         & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                            >> 0x00000010U)))
                                  ? 0ULL : ((0x1eU 
                                             >= (0x0000001fU 
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
        bufp->chgQData(oldp+16,(((0U == (0x0000001fU 
                                         & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                            >> 0x00000015U)))
                                  ? 0ULL : ((0x1eU 
                                             >= (0x0000001fU 
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
        bufp->chgQData(oldp+18,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_imm_gen__DOT__imm),64);
        bufp->chgCData(oldp+20,((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                >> 0x00000010U))),5);
        bufp->chgCData(oldp+21,((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                >> 0x00000015U))),5);
        bufp->chgCData(oldp+22,((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                >> 8U))),5);
        bufp->chgCData(oldp+23,((7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                       >> 0x0000000dU))),3);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl),21);
        bufp->chgBit(oldp+25,(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ecall));
        bufp->chgWData(oldp+26,(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg),296);
        bufp->chgQData(oldp+36,(vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_alu_result),64);
        bufp->chgQData(oldp+38,(((((QData)((IData)(
                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[9U])) 
                                   << 0x00000038U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[8U])) 
                                      << 0x00000018U) 
                                     | ((QData)((IData)(
                                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                        >> 8U))) + 
                                 (((QData)((IData)(
                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                   << 0x00000038U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[2U])) 
                                      << 0x00000018U) 
                                     | ((QData)((IData)(
                                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[1U])) 
                                        >> 8U))))),64);
        bufp->chgQData(oldp+40,(((((QData)((IData)(
                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                   << 0x00000038U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[6U])) 
                                      << 0x00000018U) 
                                     | ((QData)((IData)(
                                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                        >> 8U))) + 
                                 (((QData)((IData)(
                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                   << 0x00000038U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[2U])) 
                                      << 0x00000018U) 
                                     | ((QData)((IData)(
                                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[1U])) 
                                        >> 8U))))),64);
        bufp->chgBit(oldp+42,((vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                               & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                   >> 8U) & ((0x01000000U 
                                              & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                                              ? ((0x00800000U 
                                                  & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                                                  ? 
                                                 ((0x00400000U 
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
                                                  : 
                                                 ((0x00400000U 
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
                                              : ((~ 
                                                  (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
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
        bufp->chgBit(oldp+43,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__jump));
        bufp->chgWData(oldp+44,(vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg),209);
        bufp->chgWData(oldp+51,(vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg),136);
        bufp->chgCData(oldp+56,((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
                                                >> 3U))),5);
        bufp->chgQData(oldp+57,(((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U])
                                  ? (((QData)((IData)(
                                                      vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[2U])) 
                                      << 0x00000038U) 
                                     | (((QData)((IData)(
                                                         vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[1U])) 
                                         << 0x00000018U) 
                                        | ((QData)((IData)(
                                                           vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U])) 
                                           >> 8U)))
                                  : (((QData)((IData)(
                                                      vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[4U])) 
                                      << 0x00000038U) 
                                     | (((QData)((IData)(
                                                         vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[3U])) 
                                         << 0x00000018U) 
                                        | ((QData)((IData)(
                                                           vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[2U])) 
                                           >> 8U))))),64);
        bufp->chgBit(oldp+59,((IData)((3U == (3U & 
                                              vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U])))));
        bufp->chgBit(oldp+60,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__stall_if));
        bufp->chgBit(oldp+61,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__flush_id));
        bufp->chgBit(oldp+62,(((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__flush_id) 
                               | (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__stall_if))));
        bufp->chgQData(oldp+63,((((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[9U])) 
                                  << 0x00000038U) | 
                                 (((QData)((IData)(
                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[8U])) 
                                   << 0x00000018U) 
                                  | ((QData)((IData)(
                                                     vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                     >> 8U)))),64);
        bufp->chgQData(oldp+65,((((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                  << 0x00000038U) | 
                                 (((QData)((IData)(
                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U])) 
                                   << 0x00000018U) 
                                  | ((QData)((IData)(
                                                     vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                     >> 8U)))),64);
        bufp->chgCData(oldp+67,((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                                >> 0x00000019U))),5);
        bufp->chgCData(oldp+68,((7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                       >> 0x00000016U))),3);
        bufp->chgBit(oldp+69,((1U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                     >> 0x0000000cU))));
        bufp->chgBit(oldp+70,((1U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                     >> 0x0000000bU))));
        bufp->chgBit(oldp+71,((1U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                     >> 0x0000000aU))));
        bufp->chgBit(oldp+72,((1U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                     >> 9U))));
        bufp->chgCData(oldp+73,((7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                       >> 3U))),3);
        bufp->chgBit(oldp+74,((1U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                     >> 2U))));
        bufp->chgBit(oldp+75,((1U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])));
        bufp->chgQData(oldp+76,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a),64);
        bufp->chgQData(oldp+78,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b),64);
        bufp->chgBit(oldp+80,(((0x01000000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                                ? ((0x00800000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                                    ? ((0x00400000U 
                                        & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
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
                                    : ((0x00400000U 
                                        & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
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
                                   & ((0x00400000U 
                                       & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
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
        bufp->chgCData(oldp+81,((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                                >> 0x00000011U))),5);
        bufp->chgQData(oldp+82,((vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a 
                                 + vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b)),64);
        bufp->chgQData(oldp+84,((vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a 
                                 - vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b)),64);
        bufp->chgIData(oldp+86,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__word_result),32);
        bufp->chgQData(oldp+87,((QData)((IData)((0x0000003fU 
                                                 & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b))))),64);
        bufp->chgCData(oldp+89,((0x0000001fU & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b))),5);
        bufp->chgCData(oldp+90,((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
                                                >> 0x0000000cU))),5);
        bufp->chgBit(oldp+91,((1U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
                                     >> 5U))));
        bufp->chgBit(oldp+92,((1U & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U])));
        bufp->chgBit(oldp+93,((1U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+94,((1U & vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U])));
        bufp->chgBit(oldp+95,(((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_2) 
                               & ((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                                  >> 0x00000019U)) 
                                  == (0x0000001fU & 
                                      (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                       >> 0x00000010U))))));
        bufp->chgBit(oldp+96,(((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_2) 
                               & ((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                                  >> 0x00000019U)) 
                                  == (0x0000001fU & 
                                      (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                       >> 0x00000015U))))));
        bufp->chgBit(oldp+97,(((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_1) 
                               & ((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
                                                  >> 0x0000000cU)) 
                                  == (0x0000001fU & 
                                      (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                       >> 0x00000010U))))));
        bufp->chgBit(oldp+98,(((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_1) 
                               & ((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
                                                  >> 0x0000000cU)) 
                                  == (0x0000001fU & 
                                      (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                       >> 0x00000015U))))));
        bufp->chgBit(oldp+99,(((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_0) 
                               & ((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
                                                  >> 3U)) 
                                  == (0x0000001fU & 
                                      (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                       >> 0x00000010U))))));
        bufp->chgBit(oldp+100,(((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_0) 
                                & ((0x0000001fU & (
                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
                                                   >> 3U)) 
                                   == (0x0000001fU 
                                       & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                          >> 0x00000015U))))));
        bufp->chgQData(oldp+101,((((QData)((IData)(
                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[3U])) 
                                   << 0x0000003fU) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[2U])) 
                                      << 0x0000001fU) 
                                     | ((QData)((IData)(
                                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U])) 
                                        >> 1U)))),64);
        bufp->chgBit(oldp+103,((1U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])));
        bufp->chgCData(oldp+104,((0x0000007fU & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                                  << 6U) 
                                                 | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                    >> 0x0000001aU)))),7);
        bufp->chgCData(oldp+105,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__imm_type),3);
        bufp->chgBit(oldp+106,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr));
        bufp->chgIData(oldp+107,(((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                   << 0x0000001fU) 
                                  | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                     >> 1U))),32);
        bufp->chgCData(oldp+108,((0x0000007fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                 >> 1U))),7);
        bufp->chgQData(oldp+109,((((- (QData)((IData)(
                                                      (1U 
                                                       & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U])))) 
                                   << 0x0000000cU) 
                                  | (QData)((IData)(
                                                    (0x00000fffU 
                                                     & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                                         << 0x0000000bU) 
                                                        | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                           >> 0x00000015U))))))),64);
        bufp->chgQData(oldp+111,((((- (QData)((IData)(
                                                      (1U 
                                                       & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U])))) 
                                   << 0x0000000cU) 
                                  | (QData)((IData)(
                                                    ((0x00000fe0U 
                                                      & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                                          << 0x0000000bU) 
                                                         | (0x000007e0U 
                                                            & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                               >> 0x00000015U)))) 
                                                     | (0x0000001fU 
                                                        & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                           >> 8U))))))),64);
        bufp->chgQData(oldp+113,((((- (QData)((IData)(
                                                      (1U 
                                                       & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U])))) 
                                   << 0x0000000dU) 
                                  | (QData)((IData)(
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
        bufp->chgQData(oldp+115,((((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U]))))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (0xfffff000U 
                                                     & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                                         << 0x0000001fU) 
                                                        | (0x7ffff000U 
                                                           & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                              >> 1U)))))))),64);
        bufp->chgQData(oldp+117,((((- (QData)((IData)(
                                                      (1U 
                                                       & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U])))) 
                                   << 0x00000015U) 
                                  | (QData)((IData)(
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
        bufp->chgQData(oldp+119,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0]),64);
        bufp->chgQData(oldp+121,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[1]),64);
        bufp->chgQData(oldp+123,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[2]),64);
        bufp->chgQData(oldp+125,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[3]),64);
        bufp->chgQData(oldp+127,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[4]),64);
        bufp->chgQData(oldp+129,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[5]),64);
        bufp->chgQData(oldp+131,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[6]),64);
        bufp->chgQData(oldp+133,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[7]),64);
        bufp->chgQData(oldp+135,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[8]),64);
        bufp->chgQData(oldp+137,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[9]),64);
        bufp->chgQData(oldp+139,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[10]),64);
        bufp->chgQData(oldp+141,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[11]),64);
        bufp->chgQData(oldp+143,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[12]),64);
        bufp->chgQData(oldp+145,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[13]),64);
        bufp->chgQData(oldp+147,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[14]),64);
        bufp->chgQData(oldp+149,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[15]),64);
        bufp->chgQData(oldp+151,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[16]),64);
        bufp->chgQData(oldp+153,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[17]),64);
        bufp->chgQData(oldp+155,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[18]),64);
        bufp->chgQData(oldp+157,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[19]),64);
        bufp->chgQData(oldp+159,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[20]),64);
        bufp->chgQData(oldp+161,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[21]),64);
        bufp->chgQData(oldp+163,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[22]),64);
        bufp->chgQData(oldp+165,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[23]),64);
        bufp->chgQData(oldp+167,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[24]),64);
        bufp->chgQData(oldp+169,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[25]),64);
        bufp->chgQData(oldp+171,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[26]),64);
        bufp->chgQData(oldp+173,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[27]),64);
        bufp->chgQData(oldp+175,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[28]),64);
        bufp->chgQData(oldp+177,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[29]),64);
        bufp->chgQData(oldp+179,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[30]),64);
        bufp->chgBit(oldp+181,((1U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                      >> 6U))));
        bufp->chgQData(oldp+182,((((vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
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
        bufp->chgCData(oldp+184,((7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                        >> 0x00000011U))),3);
        bufp->chgQData(oldp+185,((((QData)((IData)(
                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[4U])) 
                                   << 0x0000002fU) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[3U])) 
                                      << 0x0000000fU) 
                                     | ((QData)((IData)(
                                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U])) 
                                        >> 0x00000011U)))),64);
        bufp->chgBit(oldp+187,((1U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
                                      >> 6U))));
    }
    bufp->chgBit(oldp+188,(vlSelfRef.tb_processor__DOT__clk));
    bufp->chgBit(oldp+189,(vlSelfRef.tb_processor__DOT__rst_n));
    bufp->chgIData(oldp+190,(vlSelfRef.tb_processor__DOT__u_imem__DOT__mem
                             [(0x00000fffU & (IData)(
                                                     (vlSelfRef.tb_processor__DOT__u_dut__DOT__u_if_stage__DOT__pc_reg 
                                                      >> 2U)))]),32);
    bufp->chgQData(oldp+191,((((QData)((IData)((((vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
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
    bufp->chgIData(oldp+193,(vlSelfRef.tb_processor__DOT__u_dmem__DOT__unnamedblk1__DOT__i),32);
    bufp->chgQData(oldp+194,(vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_rdata),64);
    bufp->chgIData(oldp+196,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->chgQData(oldp+197,(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_mem_stage__DOT__aligned_rdata),64);
    bufp->chgIData(oldp+199,(vlSelfRef.tb_processor__DOT__u_imem__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+200,(vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+201,(vlSelfRef.tb_processor__DOT__unnamedblk2__DOT__i),32);
}

void Vtb_processor___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root__trace_cleanup\n"); );
    // Body
    Vtb_processor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_processor___024root*>(voidSelf);
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
