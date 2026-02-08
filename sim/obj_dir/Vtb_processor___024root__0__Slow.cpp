// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_processor.h for the primary calling header

#include "Vtb_processor__pch.h"

VL_ATTR_COLD void Vtb_processor___024root___eval_static(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_static\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_processor__DOT__clk__0 
        = vlSelfRef.tb_processor__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_processor__DOT__rst_n__0 
        = vlSelfRef.tb_processor__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr_h2d43a386__1 = ((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ecall) 
                                              & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U]);
}

VL_ATTR_COLD void Vtb_processor___024root___eval_initial__TOP(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_initial__TOP\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("processor.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_processor__DOT__u_imem__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00001000U, vlSelfRef.tb_processor__DOT__u_imem__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_processor__DOT__u_imem__DOT__mem[(0x00000fffU 
                                                       & vlSelfRef.tb_processor__DOT__u_imem__DOT__unnamedblk1__DOT__i)] = 0x00000013U;
        vlSelfRef.tb_processor__DOT__u_imem__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_processor__DOT__u_imem__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 4096, 0, "test.hex"s,  &(vlSelfRef.tb_processor__DOT__u_imem__DOT__mem)
                 , 0, ~0ULL);
    vlSelfRef.tb_processor__DOT__u_dmem__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00002000U, vlSelfRef.tb_processor__DOT__u_dmem__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem[(0x00001fffU 
                                                       & vlSelfRef.tb_processor__DOT__u_dmem__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.tb_processor__DOT__u_dmem__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_processor__DOT__u_dmem__DOT__unnamedblk1__DOT__i);
    }
}

VL_ATTR_COLD void Vtb_processor___024root___eval_final(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_final\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_processor___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_processor___024root___eval_phase__stl(Vtb_processor___024root* vlSelf);

VL_ATTR_COLD void Vtb_processor___024root___eval_settle(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_settle\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_processor___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("../tb/tb_processor.sv", 3, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtb_processor___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtb_processor___024root___eval_triggers__stl(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_triggers__stl\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_processor___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtb_processor___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_processor___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_processor___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_processor___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vtb_processor___024root___stl_sequent__TOP__0(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___stl_sequent__TOP__0\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ecall = 0U;
    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 0U;
    vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl = 0U;
    vlSelfRef.tb_processor__DOT__dmem_wdata = 0ULL;
    vlSelfRef.tb_processor__DOT__dmem_byte_en = 0U;
    if ((0x00000080U & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U])) {
        if ((0x00000010U & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U])) {
            vlSelfRef.tb_processor__DOT__dmem_wdata = 0ULL;
            vlSelfRef.tb_processor__DOT__dmem_byte_en = 0U;
        } else if ((8U & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U])) {
            if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U])) {
                vlSelfRef.tb_processor__DOT__dmem_wdata 
                    = (((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U])) 
                        << 0x0000002fU) | (((QData)((IData)(
                                                            vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[1U])) 
                                            << 0x0000000fU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U])) 
                                              >> 0x00000011U)));
                vlSelfRef.tb_processor__DOT__dmem_byte_en 
                    = (0x000000ffU & 0xffU);
            } else {
                vlSelfRef.tb_processor__DOT__dmem_wdata 
                    = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(
                                                              ((vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[1U] 
                                                                << 0x0000000fU) 
                                                               | (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
                                                                  >> 0x00000011U)))), 
                                    VL_SHIFTL_III(32,32,32, 
                                                  (7U 
                                                   & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                                      >> 0x00000011U)), 3U));
                vlSelfRef.tb_processor__DOT__dmem_byte_en 
                    = (0x000000ffU & ((IData)(0x0fU) 
                                      << (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                                >> 0x00000011U))));
            }
        } else if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U])) {
            vlSelfRef.tb_processor__DOT__dmem_wdata 
                = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(
                                                          (0x0000ffffU 
                                                           & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[1U] 
                                                               << 0x0000000fU) 
                                                              | (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
                                                                 >> 0x00000011U))))), 
                                VL_SHIFTL_III(32,32,32, 
                                              (7U & 
                                               (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                                >> 0x00000011U)), 3U));
            vlSelfRef.tb_processor__DOT__dmem_byte_en 
                = (0x000000ffU & ((IData)(3U) << (7U 
                                                  & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                                     >> 0x00000011U))));
        } else {
            vlSelfRef.tb_processor__DOT__dmem_wdata 
                = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(
                                                          (0x000000ffU 
                                                           & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
                                                              >> 0x00000011U)))), 
                                VL_SHIFTL_III(32,32,32, 
                                              (7U & 
                                               (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                                >> 0x00000011U)), 3U));
            vlSelfRef.tb_processor__DOT__dmem_byte_en 
                = (0x000000ffU & ((IData)(1U) << (7U 
                                                  & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                                     >> 0x00000011U))));
        }
    }
    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_mem_stage__DOT__aligned_rdata 
        = VL_SHIFTR_QQI(64,64,32, (((QData)((IData)(
                                                    (((vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
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
                                    << 0x00000020U) 
                                   | (QData)((IData)(
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
                                                             >> 0x00000011U))]))))), 
                        VL_SHIFTL_III(32,32,32, (7U 
                                                 & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                                    >> 0x00000011U)), 3U));
    vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_rdata 
        = ((0x00000010U & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U])
            ? 0ULL : ((8U & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U])
                       ? ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U])
                           ? vlSelfRef.tb_processor__DOT__u_dut__DOT__u_mem_stage__DOT__aligned_rdata
                           : ((2U & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U])
                               ? (QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_mem_stage__DOT__aligned_rdata))
                               : (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelfRef.tb_processor__DOT__u_dut__DOT__u_mem_stage__DOT__aligned_rdata 
                                                                          >> 0x1fU))))))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_mem_stage__DOT__aligned_rdata)))))
                       : ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U])
                           ? ((2U & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U])
                               ? (QData)((IData)((0x0000ffffU 
                                                  & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_mem_stage__DOT__aligned_rdata))))
                               : (((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_processor__DOT__u_dut__DOT__u_mem_stage__DOT__aligned_rdata 
                                                                  >> 0x0fU)))))) 
                                   << 0x00000010U) 
                                  | (QData)((IData)(
                                                    (0x0000ffffU 
                                                     & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_mem_stage__DOT__aligned_rdata))))))
                           : ((2U & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U])
                               ? (QData)((IData)((0x000000ffU 
                                                  & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_mem_stage__DOT__aligned_rdata))))
                               : (((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_processor__DOT__u_dut__DOT__u_mem_stage__DOT__aligned_rdata 
                                                                  >> 7U)))))) 
                                   << 8U) | (QData)((IData)(
                                                            (0x000000ffU 
                                                             & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_mem_stage__DOT__aligned_rdata)))))))));
    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__imm_type = 0U;
    if ((0x00000080U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
        if ((0x00000040U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
            if ((0x00000020U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                if ((1U & (~ (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                  >> 3U)))) {
                        if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                            if ((2U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                                if ((0U == (0x01ffffffU 
                                            & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                  >> 8U))))) {
                                    vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ecall = 1U;
                                }
                            }
                        }
                    }
                }
                if ((0x00000010U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                } else if ((8U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                } else if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                    if ((2U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                        if ((0U != (0x01ffffffU & (
                                                   (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                                    << 0x00000018U) 
                                                   | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                      >> 8U))))) {
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                        }
                    } else {
                        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                    }
                } else {
                    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                }
            } else if ((0x00000010U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                if ((8U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                    if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                        if ((1U & (~ (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                      >> 1U)))) {
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                        }
                    } else {
                        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                    }
                } else {
                    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                }
            } else if ((8U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                    if ((1U & (~ (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                  >> 1U)))) {
                        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                    }
                } else {
                    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                }
            } else if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                if ((1U & (~ (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                              >> 1U)))) {
                    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                }
            } else {
                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
            }
            if ((1U & (~ (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                          >> 5U)))) {
                if ((0x00000010U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                    if ((8U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                        if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                            if ((2U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                    = (0x00006000U 
                                       | (0x00000fffU 
                                          & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                    = (0x00000100U 
                                       | vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl);
                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                    = (0x00000040U 
                                       | vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl);
                                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__imm_type = 4U;
                            }
                        }
                    }
                } else if ((8U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                    if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                        if ((2U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                = (0x00006000U | (0x00000fffU 
                                                  & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                = (0x00000100U | vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl);
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                = (0x00000060U | vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl);
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__imm_type = 0U;
                        }
                    }
                } else if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                    if ((2U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                            = (0x00000080U | vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl);
                        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__imm_type = 2U;
                    }
                }
            }
        } else {
            vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
        }
    } else if ((0x00000040U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
        if ((0x00000020U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
            if ((0x00000010U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                if ((8U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                } else if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                    if ((2U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                        if ((1U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U])) {
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                        } else if ((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                    >> 0x0000001fU)) {
                            if ((0x40000000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                            } else if ((0x20000000U 
                                        & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                            } else if ((0x10000000U 
                                        & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                            } else if ((0x08000000U 
                                        & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                            } else if ((0x04000000U 
                                        & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                            } else if ((0U != (7U & 
                                               (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                >> 0x0000000dU)))) {
                                if ((5U != (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                  >> 0x0000000dU)))) {
                                    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                                }
                            }
                        } else if ((0x40000000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                            if ((0x20000000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                            } else if ((0x10000000U 
                                        & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                            } else if ((0x08000000U 
                                        & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                            } else if ((0x04000000U 
                                        & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                            } else if ((2U != (7U & 
                                               (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                >> 0x0000000dU)))) {
                                if ((4U != (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                  >> 0x0000000dU)))) {
                                    if ((6U != (7U 
                                                & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                   >> 0x0000000dU)))) {
                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                                    }
                                }
                            }
                        } else if ((0x20000000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                        } else if ((0x10000000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                            if ((0x08000000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                            } else if ((0x04000000U 
                                        & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                            } else if ((0U != (7U & 
                                               (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                >> 0x0000000dU)))) {
                                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                            }
                        } else if ((0x08000000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                        } else if ((0x04000000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                        } else if ((0U != (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                 >> 0x0000000dU)))) {
                            if ((1U != (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                              >> 0x0000000dU)))) {
                                if ((5U != (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                  >> 0x0000000dU)))) {
                                    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                                }
                            }
                        }
                    } else {
                        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                    }
                } else {
                    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                }
                if ((1U & (~ (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                        if ((2U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                = (0x001f0fffU & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl);
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                = (0x00000100U | vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl);
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                = (1U | vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl);
                            if ((1U & (~ vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U]))) {
                                if ((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                     >> 0x0000001fU)) {
                                    if ((1U & (~ (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                  >> 0x0000001eU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                    >> 0x0000001dU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                     >> 0x0000001cU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                         >> 0x0000001bU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                             >> 0x0000001aU)))) {
                                                        if (
                                                            (0U 
                                                             == 
                                                             (7U 
                                                              & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                                 >> 0x0000000dU)))) {
                                                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                                                = 
                                                                (0x00110000U 
                                                                 | (0x0000ffffU 
                                                                    & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                                                        } else if (
                                                                   (5U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                                        >> 0x0000000dU)))) {
                                                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                                                = 
                                                                (0x00140000U 
                                                                 | (0x0000ffffU 
                                                                    & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((0x40000000U 
                                            & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                                    if ((1U & (~ (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                  >> 0x0000001dU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                    >> 0x0000001cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                     >> 0x0000001bU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                         >> 0x0000001aU)))) {
                                                    if (
                                                        (2U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                             >> 0x0000000dU)))) {
                                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                                            = 
                                                            (0x00150000U 
                                                             | (0x0000ffffU 
                                                                & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                                                    } else if (
                                                               (4U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                                    >> 0x0000000dU)))) {
                                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                                            = 
                                                            (0x00160000U 
                                                             | (0x0000ffffU 
                                                                & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                                                    } else if (
                                                               (6U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                                    >> 0x0000000dU)))) {
                                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                                            = 
                                                            (0x00170000U 
                                                             | (0x0000ffffU 
                                                                & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                   >> 0x0000001dU)))) {
                                    if ((0x10000000U 
                                         & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                    >> 0x0000001bU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                     >> 0x0000001aU)))) {
                                                if (
                                                    (0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                         >> 0x0000000dU)))) {
                                                    vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                                        = 
                                                        (0x000d0000U 
                                                         | (0x0000ffffU 
                                                            & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                    >> 0x0000001bU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                    >> 0x0000001aU)))) {
                                            if ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                     >> 0x0000000dU)))) {
                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                                    = 
                                                    (0x00100000U 
                                                     | (0x0000ffffU 
                                                        & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                                            } else if (
                                                       (1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                            >> 0x0000000dU)))) {
                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                                    = 
                                                    (0x00120000U 
                                                     | (0x0000ffffU 
                                                        & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                                            } else if (
                                                       (5U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                            >> 0x0000000dU)))) {
                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                                    = 
                                                    (0x00130000U 
                                                     | (0x0000ffffU 
                                                        & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((8U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                    if ((1U & (~ (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                  >> 1U)))) {
                        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                    }
                    if ((2U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                            = (0x000f9000U | (0x00000fffU 
                                              & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                            = (0x00000100U | vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl);
                    }
                } else {
                    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                }
            } else if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                if ((2U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                    if ((0U != (0x0000007fU & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                                << 6U) 
                                               | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                  >> 0x0000001aU))))) {
                        if ((0x20U == (0x0000007fU 
                                       & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                           << 6U) | 
                                          (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                           >> 0x0000001aU))))) {
                            if ((0U != (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                              >> 0x0000000dU)))) {
                                if ((5U != (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                  >> 0x0000000dU)))) {
                                    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                                }
                            }
                        } else if ((0x10U == (0x0000007fU 
                                              & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                                  << 6U) 
                                                 | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                    >> 0x0000001aU))))) {
                            if ((2U != (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                              >> 0x0000000dU)))) {
                                if ((4U != (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                  >> 0x0000000dU)))) {
                                    if ((6U != (7U 
                                                & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                   >> 0x0000000dU)))) {
                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                                    }
                                }
                            }
                        } else {
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                        }
                    }
                    vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                        = (0x001f0fffU & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl);
                    vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                        = (0x00000100U | vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl);
                    if ((0U == (0x0000007fU & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                                << 6U) 
                                               | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                  >> 0x0000001aU))))) {
                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                            = ((0x0000ffffU & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl) 
                               | (((0x00008000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])
                                    ? ((0x00004000U 
                                        & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])
                                        ? ((0x00002000U 
                                            & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])
                                            ? 9U : 8U)
                                        : ((0x00002000U 
                                            & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])
                                            ? 6U : 5U))
                                    : ((0x00004000U 
                                        & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])
                                        ? ((0x00002000U 
                                            & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])
                                            ? 4U : 3U)
                                        : ((0x00002000U 
                                            & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])
                                            ? 2U : 0U))) 
                                  << 0x00000010U));
                    } else if ((0x20U == (0x0000007fU 
                                          & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                              << 6U) 
                                             | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                >> 0x0000001aU))))) {
                        if ((0U == (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                          >> 0x0000000dU)))) {
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                = (0x00010000U | (0x0000ffffU 
                                                  & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                        } else if ((5U == (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                 >> 0x0000000dU)))) {
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                = (0x00070000U | (0x0000ffffU 
                                                  & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                        }
                    } else if ((0x10U == (0x0000007fU 
                                          & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                              << 6U) 
                                             | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                >> 0x0000001aU))))) {
                        if ((2U == (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                          >> 0x0000000dU)))) {
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                = (0x000a0000U | (0x0000ffffU 
                                                  & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                        } else if ((4U == (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                 >> 0x0000000dU)))) {
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                = (0x000b0000U | (0x0000ffffU 
                                                  & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                        } else if ((6U == (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                 >> 0x0000000dU)))) {
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                = (0x000c0000U | (0x0000ffffU 
                                                  & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                        }
                    }
                } else {
                    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                }
            } else {
                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
            }
            if ((1U & (~ (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                          >> 4U)))) {
                if ((8U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                    if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                        if ((2U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__imm_type = 3U;
                        }
                    }
                }
            }
        } else {
            if ((0x00000010U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
            } else if ((8U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
            } else if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                if ((1U & (~ (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                              >> 1U)))) {
                    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                }
            } else {
                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
            }
            if ((1U & (~ (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                        if ((2U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                = (0x00001000U | (0x00000fffU 
                                                  & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                = (0x00000400U | vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl);
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                = ((0x001fffe3U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl) 
                                   | (0x0000000cU & 
                                      (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                       >> 0x0000000bU)));
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__imm_type = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x00000020U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
        if ((0x00000010U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
            if ((8U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
            } else if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                if ((2U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                    if ((0U != (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                      >> 0x0000000dU)))) {
                        if ((1U != (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                          >> 0x0000000dU)))) {
                            if ((5U != (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                              >> 0x0000000dU)))) {
                                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                            }
                        }
                    }
                } else {
                    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                }
            } else {
                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
            }
            if ((1U & (~ (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                          >> 3U)))) {
                if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                    if ((2U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                            = (0x00001000U | (0x001f0fffU 
                                              & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                            = (0x00000100U | vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl);
                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                            = (1U | vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl);
                        if ((0U == (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                          >> 0x0000000dU)))) {
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                = (0x00100000U | (0x0000ffffU 
                                                  & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                        } else if ((1U == (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                 >> 0x0000000dU)))) {
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                = ((0x0000ffffU & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl) 
                                   | (((2U == (0x0000003fU 
                                               & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                                   << 5U) 
                                                  | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                     >> 0x0000001bU))))
                                        ? 0x0eU : 0x12U) 
                                      << 0x00000010U));
                        } else if ((5U == (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                 >> 0x0000000dU)))) {
                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                                = ((0x0000ffffU & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl) 
                                   | (((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                        >> 0x0000001fU)
                                        ? 0x14U : 0x13U) 
                                      << 0x00000010U));
                        }
                        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__imm_type = 0U;
                    }
                }
            }
        } else if ((8U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
            if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                if ((1U & (~ (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                              >> 1U)))) {
                    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
                }
                if ((2U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                    vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                        = (0x00005000U | (0x00000fffU 
                                          & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                    vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                        = (0x00000100U | vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl);
                    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__imm_type = 3U;
                }
            } else {
                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
            }
        } else if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
            if ((1U & (~ (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                          >> 1U)))) {
                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
            }
            if ((2U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                    = (0x00001000U | (0x001f0fffU & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                    = (0x00000100U | vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl);
                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                    = ((0x0000ffffU & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl) 
                       | (((0x00008000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])
                            ? ((0x00004000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])
                                ? ((0x00002000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])
                                    ? 9U : 8U) : ((0x00002000U 
                                                   & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])
                                                   ? 
                                                  ((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                    >> 0x0000001fU)
                                                    ? 7U
                                                    : 6U)
                                                   : 5U))
                            : ((0x00004000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])
                                ? ((0x00002000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])
                                    ? 4U : 3U) : ((0x00002000U 
                                                   & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])
                                                   ? 2U
                                                   : 0U))) 
                          << 0x00000010U));
                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__imm_type = 0U;
            }
        } else {
            vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
        }
    } else {
        if ((0x00000010U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
            vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
        } else if ((8U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
            vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
        } else if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
            if ((1U & (~ (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                          >> 1U)))) {
                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
            }
        } else {
            vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 1U;
        }
        if ((1U & (~ (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                      >> 4U)))) {
            if ((1U & (~ (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                          >> 3U)))) {
                if ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                    if ((2U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])) {
                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                            = (0x00001800U | (0x000007ffU 
                                              & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl));
                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                            = (0x00000300U | vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl);
                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                            = ((0x001fffe1U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl) 
                               | (((6U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                          >> 0x0000000cU)) 
                                   | (1U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                            >> 0x0000000fU))) 
                                  << 1U));
                        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__imm_type = 0U;
                    }
                }
            }
        }
    }
    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_2 
        = (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
           & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
               >> 9U) & (0U != (0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                               >> 0x00000019U)))));
    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_1 
        = (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
           & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
               >> 5U) & (0U != (0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
                                               >> 0x0000000cU)))));
    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_0 
        = (vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
           & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
               >> 1U) & (0U != (0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
                                               >> 3U)))));
    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__jump 
        = (IData)((0x00000081U == (0x00000081U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])));
    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a 
        = ((0U == (3U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                         >> 0x0000000fU))) ? (((QData)((IData)(
                                                               vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                               << 0x00000038U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[6U])) 
                                                  << 0x00000018U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                                    >> 8U)))
            : ((1U == (3U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                             >> 0x0000000fU))) ? (((QData)((IData)(
                                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[9U])) 
                                                   << 0x00000038U) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[8U])) 
                                                      << 0x00000018U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                                        >> 8U)))
                : ((2U == (3U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                 >> 0x0000000fU))) ? 0ULL
                    : (((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                        << 0x00000038U) | (((QData)((IData)(
                                                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[6U])) 
                                            << 0x00000018U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                              >> 8U))))));
    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b 
        = ((0U == (3U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                         >> 0x0000000dU))) ? (((QData)((IData)(
                                                               vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                               << 0x00000038U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U])) 
                                                  << 0x00000018U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                                    >> 8U)))
            : ((1U == (3U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                             >> 0x0000000dU))) ? (((QData)((IData)(
                                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                                   << 0x00000038U) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[2U])) 
                                                      << 0x00000018U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[1U])) 
                                                        >> 8U)))
                : ((2U == (3U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                 >> 0x0000000dU))) ? 4ULL
                    : (((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                        << 0x00000038U) | (((QData)((IData)(
                                                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U])) 
                                            << 0x00000018U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                              >> 8U))))));
    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_imm_gen__DOT__imm 
        = ((4U & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__imm_type))
            ? ((2U & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__imm_type))
                ? 0ULL : ((1U & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__imm_type))
                           ? 0ULL : (((- (QData)((IData)(
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
                                                              >> 0x00000015U))))))))
            : ((2U & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__imm_type))
                ? ((1U & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__imm_type))
                    ? (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U]))))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                                               << 0x0000001fU) 
                                                              | (0x7ffff000U 
                                                                 & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                                    >> 1U)))))))
                    : (((- (QData)((IData)((1U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U])))) 
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
                                                                    >> 8U))))))))
                : ((1U & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__imm_type))
                    ? (((- (QData)((IData)((1U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U])))) 
                        << 0x0000000cU) | (QData)((IData)(
                                                          ((0x00000fe0U 
                                                            & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                                                << 0x0000000bU) 
                                                               | (0x000007e0U 
                                                                  & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                                     >> 0x00000015U)))) 
                                                           | (0x0000001fU 
                                                              & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                                 >> 8U))))))
                    : (((- (QData)((IData)((1U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U])))) 
                        << 0x0000000cU) | (QData)((IData)(
                                                          (0x00000fffU 
                                                           & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                                                               << 0x0000000bU) 
                                                              | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                                 >> 0x00000015U)))))))));
    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__stall_if 
        = (((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_2) 
            & ((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                               >> 0x00000019U)) == 
               (0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                               >> 0x00000010U)))) | 
           (((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_2) 
             & ((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                >> 0x00000019U)) == 
                (0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                >> 0x00000015U)))) 
            | (((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_1) 
                & ((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
                                   >> 0x0000000cU)) 
                   == (0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                      >> 0x00000010U)))) 
               | (((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_1) 
                   & ((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
                                      >> 0x0000000cU)) 
                      == (0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                         >> 0x00000015U)))) 
                  | ((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_0) 
                     & (((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
                                         >> 3U)) == 
                         (0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                         >> 0x00000010U))) 
                        | ((0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
                                           >> 3U)) 
                           == (0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                              >> 0x00000015U)))))))));
    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__flush_id 
        = ((vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
            & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                >> 8U) & ((0x01000000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                           ? ((0x00800000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                               ? ((0x00400000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
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
                               : ((0x00400000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
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
                                               >> 8U))))))))) 
           | (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__jump));
    if ((0x00200000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])) {
        if ((0x00100000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])) {
            vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_alu_result = 0ULL;
        } else if ((0x00080000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])) {
            if ((0x00040000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])) {
                vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_alu_result 
                    = ((0x00020000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                        ? (vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b 
                           + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a)), 3U))
                        : (vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b 
                           + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a)), 2U)));
            } else if ((0x00020000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])) {
                vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_alu_result 
                    = (vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b 
                       + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a)), 1U));
            } else {
                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__word_result 
                    = VL_SHIFTRS_III(32,32,5, (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a), 
                                     (0x0000001fU & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b)));
                vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__1__val 
                    = vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__word_result;
                vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__1__Vfuncout 
                    = (((QData)((IData)((- (IData)(
                                                   (vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__1__val 
                                                    >> 0x1fU))))) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__1__val)));
                vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_alu_result 
                    = vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__1__Vfuncout;
            }
        } else if ((0x00040000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])) {
            if ((0x00020000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])) {
                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__word_result 
                    = ((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a) 
                       >> (0x0000001fU & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b)));
                vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__2__val 
                    = vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__word_result;
                vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__2__Vfuncout 
                    = (((QData)((IData)((- (IData)(
                                                   (vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__2__val 
                                                    >> 0x1fU))))) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__2__val)));
                vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_alu_result 
                    = vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__2__Vfuncout;
            } else {
                vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__word_result 
                    = ((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a) 
                       << (0x0000001fU & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b)));
                vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__3__val 
                    = vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__word_result;
                vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__3__Vfuncout 
                    = (((QData)((IData)((- (IData)(
                                                   (vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__3__val 
                                                    >> 0x1fU))))) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__3__val)));
                vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_alu_result 
                    = vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__3__Vfuncout;
            }
        } else if ((0x00020000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])) {
            vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__word_result 
                = ((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a) 
                   - (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b));
            vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__4__val 
                = vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__word_result;
            vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__4__Vfuncout 
                = (((QData)((IData)((- (IData)((vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__4__val 
                                                >> 0x1fU))))) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__4__val)));
            vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_alu_result 
                = vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__4__Vfuncout;
        } else {
            vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__word_result 
                = ((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a) 
                   + (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b));
            vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__5__val 
                = vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__word_result;
            vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__5__Vfuncout 
                = (((QData)((IData)((- (IData)((vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__5__val 
                                                >> 0x1fU))))) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__5__val)));
            vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_alu_result 
                = vlSelfRef.__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__5__Vfuncout;
        }
    } else {
        vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_alu_result 
            = ((0x00100000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                ? ((0x00080000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                    ? ((0x00040000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                        ? ((0x00020000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                            ? vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b
                            : VL_SHIFTL_QQQ(64,64,64, (QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a)), (QData)((IData)(
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b))))))
                        : ((0x00020000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                            ? (vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b 
                               + (QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a)))
                            : (vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b 
                               + VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a, 3U))))
                    : ((0x00040000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                        ? ((0x00020000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                            ? (vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b 
                               + VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a, 2U))
                            : (vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b 
                               + VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a, 1U)))
                        : ((0x00020000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                            ? (vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a 
                               & vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b)
                            : (vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a 
                               | vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b))))
                : ((0x00080000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                    ? ((0x00040000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                        ? ((0x00020000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                            ? VL_SHIFTRS_QQQ(64,64,64, vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a, (QData)((IData)(
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b)))))
                            : VL_SHIFTR_QQQ(64,64,64, vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a, (QData)((IData)(
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b))))))
                        : ((0x00020000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                            ? (vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a 
                               ^ vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b)
                            : ((vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a 
                                < vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b)
                                ? 1ULL : 0ULL))) : 
                   ((0x00040000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                     ? ((0x00020000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                         ? (VL_LTS_IQQ(64, vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a, vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b)
                             ? 1ULL : 0ULL) : VL_SHIFTL_QQQ(64,64,64, vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a, (QData)((IData)(
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b))))))
                     : ((0x00020000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])
                         ? (vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a 
                            - vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b)
                         : (vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a 
                            + vlSelfRef.tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b)))));
    }
    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_if_stage__DOT__pc_next 
        = (((vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
             >> 6U) & (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__jump))
            ? (0xfffffffffffffffeULL & ((((QData)((IData)(
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
                ? ((((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[9U])) 
                     << 0x00000038U) | (((QData)((IData)(
                                                         vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[8U])) 
                                         << 0x00000018U) 
                                        | ((QData)((IData)(
                                                           vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                           >> 8U))) 
                   + (((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                       << 0x00000038U) | (((QData)((IData)(
                                                           vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[2U])) 
                                           << 0x00000018U) 
                                          | ((QData)((IData)(
                                                             vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[1U])) 
                                             >> 8U))))
                : (4ULL + vlSelfRef.tb_processor__DOT__u_dut__DOT__u_if_stage__DOT__pc_reg)));
}

VL_ATTR_COLD void Vtb_processor___024root____Vm_traceActivitySetAll(Vtb_processor___024root* vlSelf);

VL_ATTR_COLD void Vtb_processor___024root___eval_stl(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_stl\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_processor___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_processor___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_processor___024root___eval_phase__stl(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_phase__stl\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_processor___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtb_processor___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_processor___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_processor___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_processor___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_processor___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_processor.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_processor.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( (tb_processor.u_dut.id_ecall & tb_processor.u_dut.if_id_reg[0]))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_processor___024root____Vm_traceActivitySetAll(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root____Vm_traceActivitySetAll\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtb_processor___024root___ctor_var_reset(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___ctor_var_reset\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_processor__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15064323546484546977ull);
    vlSelf->tb_processor__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15660401156732641036ull);
    vlSelf->tb_processor__DOT__dmem_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11120373509288762943ull);
    vlSelf->tb_processor__DOT__dmem_byte_en = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1969317362511824552ull);
    vlSelf->tb_processor__DOT__cycle_count = 0;
    vlSelf->tb_processor__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_processor__DOT__unnamedblk2__DOT__i = 0;
    VL_SCOPED_RAND_RESET_W(97, vlSelf->tb_processor__DOT__u_dut__DOT__if_id_reg, __VscopeHash, 9784157484024791571ull);
    vlSelf->tb_processor__DOT__u_dut__DOT__id_ctrl = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 5745359243542282513ull);
    vlSelf->tb_processor__DOT__u_dut__DOT__id_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18340139818036628177ull);
    VL_SCOPED_RAND_RESET_W(296, vlSelf->tb_processor__DOT__u_dut__DOT__id_ex_reg, __VscopeHash, 16266317833020037572ull);
    vlSelf->tb_processor__DOT__u_dut__DOT__ex_alu_result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8790783926176988381ull);
    VL_SCOPED_RAND_RESET_W(209, vlSelf->tb_processor__DOT__u_dut__DOT__ex_mem_reg, __VscopeHash, 4747520988973129867ull);
    vlSelf->tb_processor__DOT__u_dut__DOT__mem_rdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6094440958654869813ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->tb_processor__DOT__u_dut__DOT__mem_wb_reg, __VscopeHash, 6137373431097920665ull);
    vlSelf->tb_processor__DOT__u_dut__DOT__u_if_stage__DOT__pc_reg = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16264463907164319224ull);
    vlSelf->tb_processor__DOT__u_dut__DOT__u_if_stage__DOT__pc_next = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4722653237289999952ull);
    vlSelf->tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__imm_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4333785968008604998ull);
    vlSelf->tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14288250470475527941ull);
    vlSelf->tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_imm_gen__DOT__imm = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 972306017996220358ull);
    vlSelf->tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT____Vlvbound_h0d75228f__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6574673327082281063ull);
    }
    vlSelf->tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2850875907513283139ull);
    vlSelf->tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__stall_if = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4435892964469267695ull);
    vlSelf->tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__flush_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9002905533508181557ull);
    vlSelf->tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_0 = 0;
    vlSelf->tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_1 = 0;
    vlSelf->tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_2 = 0;
    vlSelf->tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3104515939019280894ull);
    vlSelf->tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15457207404315578278ull);
    vlSelf->tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__word_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12955129019646234273ull);
    vlSelf->tb_processor__DOT__u_dut__DOT__u_mem_stage__DOT__aligned_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2060972253453442960ull);
    vlSelf->tb_processor__DOT__u_dut__DOT__u_mem_stage__DOT__aligned_rdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3632316721604879447ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->tb_processor__DOT__u_imem__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 274267090059721598ull);
    }
    vlSelf->tb_processor__DOT__u_imem__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->tb_processor__DOT__u_dmem__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 407972232082016499ull);
    }
    vlSelf->tb_processor__DOT__u_dmem__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__1__Vfuncout = 0;
    vlSelf->__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__1__val = 0;
    vlSelf->__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__2__Vfuncout = 0;
    vlSelf->__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__2__val = 0;
    vlSelf->__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__3__Vfuncout = 0;
    vlSelf->__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__3__val = 0;
    vlSelf->__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__4__Vfuncout = 0;
    vlSelf->__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__4__val = 0;
    vlSelf->__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__5__Vfuncout = 0;
    vlSelf->__Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__5__val = 0;
    vlSelf->__Vdly__tb_processor__DOT__cycle_count = 0;
    vlSelf->__VdlyVal__tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers__v0 = 0;
    vlSelf->__VdlyDim0__tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers__v0 = 0;
    vlSelf->__VdlySet__tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers__v0 = 0;
    vlSelf->__VdlySet__tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers__v1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_processor__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_processor__DOT__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr_h2d43a386__1 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
