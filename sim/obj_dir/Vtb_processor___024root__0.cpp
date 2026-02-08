// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_processor.h for the primary calling header

#include "Vtb_processor__pch.h"

VL_ATTR_COLD void Vtb_processor___024root___eval_initial__TOP(Vtb_processor___024root* vlSelf);
VlCoroutine Vtb_processor___024root___eval_initial__TOP__Vtiming__0(Vtb_processor___024root* vlSelf);
VlCoroutine Vtb_processor___024root___eval_initial__TOP__Vtiming__1(Vtb_processor___024root* vlSelf, VlProcessRef vlProcess);

void Vtb_processor___024root___eval_initial(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_initial\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_processor___024root___eval_initial__TOP(vlSelf);
    Vtb_processor___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_processor___024root___eval_initial__TOP__Vtiming__1(vlSelf, std::make_shared<VlProcess>());
}

VlCoroutine Vtb_processor___024root___eval_initial__TOP__Vtiming__0(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_processor__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "../tb/tb_processor.sv", 
                                             27);
        vlSelfRef.tb_processor__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_processor__DOT__clk)));
    }
    co_return;}

VlCoroutine Vtb_processor___024root___eval_initial__TOP__Vtiming__1____Vfork_1__0(Vtb_processor___024root* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_1__sync);
VlCoroutine Vtb_processor___024root___eval_initial__TOP__Vtiming__1____Vfork_1__1(Vtb_processor___024root* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_1__sync);

VlCoroutine Vtb_processor___024root___eval_initial__TOP__Vtiming__1(Vtb_processor___024root* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_processor__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_processor__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    VL_WRITEF_NX("========================================\nRISC-V 64I-Zba Processor Testbench\n========================================\n",0);
    vlSelfRef.tb_processor__DOT__rst_n = 0U;
    tb_processor__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, tb_processor__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h6ddfe047__0.trigger(0U, 
                                                             vlProcess, 
                                                             "@(posedge tb_processor.clk)", 
                                                             "../tb/tb_processor.sv", 
                                                             106);
        tb_processor__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_processor__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_processor__DOT__rst_n = 1U;
    VL_WRITEF_NX("[%0t] Reset released\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    VlForkSync __Vfork_1__sync;
    __Vfork_1__sync.init(1U, vlProcess);
    Vtb_processor___024root___eval_initial__TOP__Vtiming__1____Vfork_1__0(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_1__sync);
    Vtb_processor___024root___eval_initial__TOP__Vtiming__1____Vfork_1__1(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_1__sync);
    co_await __Vfork_1__sync.join(vlProcess, "../tb/tb_processor.sv", 
                                  111);
    vlProcess->disableFork();
    VL_WRITEF_NX("\nFinal Register State:\n",0);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0U;
    VL_WRITEF_NX("  x0  = 0x0000000000000000 (hardwired)\n",0);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 1U;
    VL_WRITEF_NX("  x1  = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [0U]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 2U;
    VL_WRITEF_NX("  x2  = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [1U]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 3U;
    VL_WRITEF_NX("  x3  = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [2U]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 4U;
    VL_WRITEF_NX("  x4  = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [3U]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 5U;
    VL_WRITEF_NX("  x5  = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [4U]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 6U;
    VL_WRITEF_NX("  x6  = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [5U]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 7U;
    VL_WRITEF_NX("  x7  = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [6U]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 8U;
    VL_WRITEF_NX("  x8  = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [7U]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 9U;
    VL_WRITEF_NX("  x9  = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [8U]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x0000000aU;
    VL_WRITEF_NX("  x10 = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [9U]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x0000000bU;
    VL_WRITEF_NX("  x11 = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [0x0aU]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x0000000cU;
    VL_WRITEF_NX("  x12 = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [0x0bU]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x0000000dU;
    VL_WRITEF_NX("  x13 = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [0x0cU]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x0000000eU;
    VL_WRITEF_NX("  x14 = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [0x0dU]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x0000000fU;
    VL_WRITEF_NX("  x15 = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [0x0eU]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x00000010U;
    VL_WRITEF_NX("  x16 = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [0x0fU]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x00000011U;
    VL_WRITEF_NX("  x17 = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [0x10U]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x00000012U;
    VL_WRITEF_NX("  x18 = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [0x11U]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x00000013U;
    VL_WRITEF_NX("  x19 = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [0x12U]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x00000014U;
    VL_WRITEF_NX("  x20 = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [0x13U]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x00000015U;
    VL_WRITEF_NX("  x21 = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [0x14U]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x00000016U;
    VL_WRITEF_NX("  x22 = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [0x15U]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x00000017U;
    VL_WRITEF_NX("  x23 = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [0x16U]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x00000018U;
    VL_WRITEF_NX("  x24 = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [0x17U]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x00000019U;
    VL_WRITEF_NX("  x25 = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [0x18U]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x0000001aU;
    VL_WRITEF_NX("  x26 = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [0x19U]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x0000001bU;
    VL_WRITEF_NX("  x27 = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [0x1aU]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x0000001cU;
    VL_WRITEF_NX("  x28 = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [0x1bU]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x0000001dU;
    VL_WRITEF_NX("  x29 = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [0x1cU]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x0000001eU;
    VL_WRITEF_NX("  x30 = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [0x1dU]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x0000001fU;
    VL_WRITEF_NX("  x31 = 0x%016x\n",0,64,vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                 [0x1eU]);
    vlSelfRef.tb_processor__DOT__unnamedblk1__DOT__i = 0x00000020U;
    VL_WRITEF_NX("\nData Memory (first 64 bytes):\n",0);
    vlSelfRef.tb_processor__DOT__unnamedblk2__DOT__i = 0U;
    VL_WRITEF_NX("  0x0000: %02x %02x %02x %02x %02x %02x %02x %02x\n",0,
                 8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [1U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [2U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [3U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [4U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [5U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [6U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [7U]);
    vlSelfRef.tb_processor__DOT__unnamedblk2__DOT__i = 8U;
    VL_WRITEF_NX("  0x0008: %02x %02x %02x %02x %02x %02x %02x %02x\n",0,
                 8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [8U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [9U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x000aU],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x000bU],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x000cU],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x000dU],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x000eU],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x000fU]);
    vlSelfRef.tb_processor__DOT__unnamedblk2__DOT__i = 0x00000010U;
    VL_WRITEF_NX("  0x0010: %02x %02x %02x %02x %02x %02x %02x %02x\n",0,
                 8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0010U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0011U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0012U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0013U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0014U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0015U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0016U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0017U]);
    vlSelfRef.tb_processor__DOT__unnamedblk2__DOT__i = 0x00000018U;
    VL_WRITEF_NX("  0x0018: %02x %02x %02x %02x %02x %02x %02x %02x\n",0,
                 8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0018U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0019U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x001aU],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x001bU],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x001cU],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x001dU],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x001eU],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x001fU]);
    vlSelfRef.tb_processor__DOT__unnamedblk2__DOT__i = 0x00000020U;
    VL_WRITEF_NX("  0x0020: %02x %02x %02x %02x %02x %02x %02x %02x\n",0,
                 8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0020U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0021U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0022U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0023U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0024U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0025U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0026U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0027U]);
    vlSelfRef.tb_processor__DOT__unnamedblk2__DOT__i = 0x00000028U;
    VL_WRITEF_NX("  0x0028: %02x %02x %02x %02x %02x %02x %02x %02x\n",0,
                 8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0028U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0029U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x002aU],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x002bU],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x002cU],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x002dU],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x002eU],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x002fU]);
    vlSelfRef.tb_processor__DOT__unnamedblk2__DOT__i = 0x00000030U;
    VL_WRITEF_NX("  0x0030: %02x %02x %02x %02x %02x %02x %02x %02x\n",0,
                 8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0030U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0031U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0032U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0033U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0034U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0035U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0036U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0037U]);
    vlSelfRef.tb_processor__DOT__unnamedblk2__DOT__i = 0x00000038U;
    VL_WRITEF_NX("  0x0038: %02x %02x %02x %02x %02x %02x %02x %02x\n",0,
                 8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0038U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x0039U],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x003aU],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x003bU],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x003cU],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x003dU],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x003eU],8,vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem
                 [0x003fU]);
    vlSelfRef.tb_processor__DOT__unnamedblk2__DOT__i = 0x00000040U;
    VL_WRITEF_NX("\n========================================\nSimulation finished\n========================================\n",0);
    vlProcess->disableFork();
    VL_FINISH_MT("../tb/tb_processor.sv", 150, "");
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

VlCoroutine Vtb_processor___024root___eval_initial__TOP__Vtiming__1____Vfork_1__1(Vtb_processor___024root* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_initial__TOP__Vtiming__1____Vfork_1__1\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_tb_processor__DOT____VforkTask_0__0__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_processor__DOT____VforkTask_0__0__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    __Vtask_tb_processor__DOT____VforkTask_0__0__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_tb_processor__DOT____VforkTask_0__0__unnamedblk1_2__DOT____Vrepeat1 = 0x00002710U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_processor__DOT____VforkTask_0__0__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h6ddfe047__0.trigger(0U, 
                                                             vlProcess, 
                                                             "@(posedge tb_processor.clk)", 
                                                             "../tb/tb_processor.sv", 
                                                             120);
        __Vtask_tb_processor__DOT____VforkTask_0__0__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_processor__DOT____VforkTask_0__0__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    VL_WRITEF_NX("\n========================================\n[%0t] TIMEOUT after 10000 cycles\n========================================\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    __Vfork_1__sync.done("../tb/tb_processor.sv", 119);
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

VlCoroutine Vtb_processor___024root___eval_initial__TOP__Vtiming__1____Vfork_1__0(Vtb_processor___024root* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_initial__TOP__Vtiming__1____Vfork_1__0\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ ((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ecall) 
                     & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])))) {
        co_await vlSelfRef.__VtrigSched_hb8f46989__0.trigger(1U, 
                                                             vlProcess, 
                                                             "@( (tb_processor.u_dut.id_ecall & tb_processor.u_dut.if_id_reg[0]))", 
                                                             "../tb/tb_processor.sv", 
                                                             113);
    }
    VL_WRITEF_NX("\n========================================\n[%0t] ECALL detected - Test completed\nTotal cycles: %0d\n========================================\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_processor__DOT__cycle_count);
    __Vfork_1__sync.done("../tb/tb_processor.sv", 112);
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_processor___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtb_processor___024root___eval_triggers__act(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_triggers__act\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h2d43a386__0;
    __Vtrigprevexpr_h2d43a386__0 = 0;
    // Body
    __Vtrigprevexpr_h2d43a386__0 = ((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ecall) 
                                    & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U]);
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(__Vtrigprevexpr_h2d43a386__0) 
                                                        != (IData)(vlSelfRef.__Vtrigprevexpr_h2d43a386__1)) 
                                                       << 3U) 
                                                      | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.tb_processor__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_processor__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_processor__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_processor__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_processor__DOT__clk__0 
        = vlSelfRef.tb_processor__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_processor__DOT__rst_n__0 
        = vlSelfRef.tb_processor__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr_h2d43a386__1 = __Vtrigprevexpr_h2d43a386__0;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_processor___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtb_processor___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___trigger_anySet__act\n"); );
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

void Vtb_processor___024root___nba_sequent__TOP__0(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___nba_sequent__TOP__0\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_processor__DOT__cycle_count 
        = vlSelfRef.tb_processor__DOT__cycle_count;
    vlSelfRef.__VdlySet__tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers__v0 = 0U;
    vlSelfRef.__VdlySet__tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers__v1 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_processor__DOT__rst_n)))) {
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__unnamedblk1__DOT__i = 0x00000020U;
    }
    if (vlSelfRef.tb_processor__DOT__rst_n) {
        vlSelfRef.__Vdly__tb_processor__DOT__cycle_count 
            = ((IData)(1U) + vlSelfRef.tb_processor__DOT__cycle_count);
        if ((((vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
               >> 1U) & vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U]) 
             & (0U != (0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
                                      >> 3U))))) {
            vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT____Vlvbound_h0d75228f__0 
                = ((4U & vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U])
                    ? (((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[2U])) 
                        << 0x00000038U) | (((QData)((IData)(
                                                            vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[1U])) 
                                            << 0x00000018U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U])) 
                                              >> 8U)))
                    : (((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[4U])) 
                        << 0x00000038U) | (((QData)((IData)(
                                                            vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[3U])) 
                                            << 0x00000018U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[2U])) 
                                              >> 8U))));
            if ((0x1eU >= (0x0000001fU & (((vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
                                            << 0x0000001dU) 
                                           | (vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
                                              >> 3U)) 
                                          - (IData)(1U))))) {
                vlSelfRef.__VdlyVal__tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers__v0 
                    = vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT____Vlvbound_h0d75228f__0;
                vlSelfRef.__VdlyDim0__tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers__v0 
                    = (0x0000001fU & (((vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
                                        << 0x0000001dU) 
                                       | (vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
                                          >> 3U)) - (IData)(1U)));
                vlSelfRef.__VdlySet__tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers__v0 = 1U;
            }
        }
    } else {
        vlSelfRef.__Vdly__tb_processor__DOT__cycle_count = 0U;
        vlSelfRef.__VdlySet__tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers__v1 = 1U;
    }
}

void Vtb_processor___024root___nba_sequent__TOP__1(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___nba_sequent__TOP__1\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v0;
    __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v0 = 0;
    SData/*12:0*/ __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v0;
    __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v0;
    __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v1;
    __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v1 = 0;
    SData/*12:0*/ __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v1;
    __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v1;
    __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v2;
    __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v2 = 0;
    SData/*12:0*/ __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v2;
    __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v2;
    __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v3;
    __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v3 = 0;
    SData/*12:0*/ __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v3;
    __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v3;
    __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v4;
    __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v4 = 0;
    SData/*12:0*/ __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v4;
    __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v4;
    __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v5;
    __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v5 = 0;
    SData/*12:0*/ __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v5;
    __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v5;
    __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v6;
    __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v6 = 0;
    SData/*12:0*/ __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v6;
    __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v6;
    __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v6 = 0;
    CData/*7:0*/ __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v7;
    __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v7 = 0;
    SData/*12:0*/ __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v7;
    __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v7;
    __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v7 = 0;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_processor__DOT__rst_n) 
                      & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])))) {
        VL_WRITEF_NX("[%0t] Cycle %0d: PC=0x%016x Instr=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.tb_processor__DOT__cycle_count,
                     64,(((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[3U])) 
                          << 0x0000003fU) | (((QData)((IData)(
                                                              vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[2U])) 
                                              << 0x0000001fU) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U])) 
                                                >> 1U))),
                     32,((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                          << 0x0000001fU) | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                             >> 1U)));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_processor__DOT__rst_n) 
                      & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
                          >> 7U) & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U]))))) {
        VL_WRITEF_NX("[%0t] MEM WRITE: addr=0x%016x data=0x%016x byte_en=0x%02x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,64,
                     (0xfffffffffffffff8ULL & (((QData)((IData)(
                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[4U])) 
                                                << 0x0000002fU) 
                                               | (((QData)((IData)(
                                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[3U])) 
                                                   << 0x0000000fU) 
                                                  | (0x00007ffffffffff8ULL 
                                                     & ((QData)((IData)(
                                                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U])) 
                                                        >> 0x00000011U))))),
                     64,vlSelfRef.tb_processor__DOT__dmem_wdata,
                     8,(IData)(vlSelfRef.tb_processor__DOT__dmem_byte_en));
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_processor__DOT__rst_n) 
                       & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
                           >> 1U) & vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U])) 
                      & (0U != (0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
                                               >> 3U))))))) {
        VL_WRITEF_NX("[%0t] REG WRITE: x%0# = 0x%016x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,5,
                     (0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
                                     >> 3U)),64,((4U 
                                                  & vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U])
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[2U])) 
                                                   << 0x00000038U) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[1U])) 
                                                      << 0x00000018U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U])) 
                                                        >> 8U)))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[4U])) 
                                                   << 0x00000038U) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[3U])) 
                                                      << 0x00000018U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[2U])) 
                                                        >> 8U)))));
    }
    __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v0 = 0U;
    __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v1 = 0U;
    __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v2 = 0U;
    __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v3 = 0U;
    __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v4 = 0U;
    __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v5 = 0U;
    __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v6 = 0U;
    __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v7 = 0U;
    if ((IData)((0x00000081U == (0x00000081U & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U])))) {
        if ((1U & (IData)(vlSelfRef.tb_processor__DOT__dmem_byte_en))) {
            __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_processor__DOT__dmem_wdata));
            __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v0 
                = (0x00001ff8U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                  >> 0x00000011U));
            __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_processor__DOT__dmem_byte_en))) {
            __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v1 
                = (0x000000ffU & (IData)((vlSelfRef.tb_processor__DOT__dmem_wdata 
                                          >> 8U)));
            __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v1 
                = (0x00001fffU & ((IData)(1U) + (0x00001ff8U 
                                                 & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                                    >> 0x00000011U))));
            __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.tb_processor__DOT__dmem_byte_en))) {
            __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v2 
                = (0x000000ffU & (IData)((vlSelfRef.tb_processor__DOT__dmem_wdata 
                                          >> 0x10U)));
            __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v2 
                = (0x00001fffU & ((IData)(2U) + (0x00001ff8U 
                                                 & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                                    >> 0x00000011U))));
            __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.tb_processor__DOT__dmem_byte_en))) {
            __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v3 
                = (0x000000ffU & (IData)((vlSelfRef.tb_processor__DOT__dmem_wdata 
                                          >> 0x18U)));
            __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v3 
                = (0x00001fffU & ((IData)(3U) + (0x00001ff8U 
                                                 & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                                    >> 0x00000011U))));
            __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v3 = 1U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.tb_processor__DOT__dmem_byte_en))) {
            __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v4 
                = (0x000000ffU & (IData)((vlSelfRef.tb_processor__DOT__dmem_wdata 
                                          >> 0x20U)));
            __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v4 
                = (0x00001fffU & ((IData)(4U) + (0x00001ff8U 
                                                 & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                                    >> 0x00000011U))));
            __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v4 = 1U;
        }
        if ((0x00000020U & (IData)(vlSelfRef.tb_processor__DOT__dmem_byte_en))) {
            __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v5 
                = (0x000000ffU & (IData)((vlSelfRef.tb_processor__DOT__dmem_wdata 
                                          >> 0x28U)));
            __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v5 
                = (0x00001fffU & ((IData)(5U) + (0x00001ff8U 
                                                 & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                                    >> 0x00000011U))));
            __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v5 = 1U;
        }
        if ((0x00000040U & (IData)(vlSelfRef.tb_processor__DOT__dmem_byte_en))) {
            __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v6 
                = (0x000000ffU & (IData)((vlSelfRef.tb_processor__DOT__dmem_wdata 
                                          >> 0x30U)));
            __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v6 
                = (0x00001fffU & ((IData)(6U) + (0x00001ff8U 
                                                 & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                                    >> 0x00000011U))));
            __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v6 = 1U;
        }
        if ((0x00000080U & (IData)(vlSelfRef.tb_processor__DOT__dmem_byte_en))) {
            __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v7 
                = (0x000000ffU & (IData)((vlSelfRef.tb_processor__DOT__dmem_wdata 
                                          >> 0x38U)));
            __VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v7 
                = (0x00001fffU & ((IData)(7U) + (0x00001ff8U 
                                                 & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
                                                    >> 0x00000011U))));
            __VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v7 = 1U;
        }
    }
    if (__VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v0) {
        vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem[__VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v0] 
            = __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v0;
    }
    if (__VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v1) {
        vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem[__VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v1] 
            = __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v1;
    }
    if (__VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v2) {
        vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem[__VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v2] 
            = __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v2;
    }
    if (__VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v3) {
        vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem[__VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v3] 
            = __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v3;
    }
    if (__VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v4) {
        vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem[__VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v4] 
            = __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v4;
    }
    if (__VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v5) {
        vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem[__VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v5] 
            = __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v5;
    }
    if (__VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v6) {
        vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem[__VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v6] 
            = __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v6;
    }
    if (__VdlySet__tb_processor__DOT__u_dmem__DOT__mem__v7) {
        vlSelfRef.tb_processor__DOT__u_dmem__DOT__mem[__VdlyDim0__tb_processor__DOT__u_dmem__DOT__mem__v7] 
            = __VdlyVal__tb_processor__DOT__u_dmem__DOT__mem__v7;
    }
}

extern const VlWide<10>/*319:0*/ Vtb_processor__ConstPool__CONST_ha8c708d0_0;

void Vtb_processor___024root___nba_sequent__TOP__2(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___nba_sequent__TOP__2\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_processor__DOT__cycle_count = vlSelfRef.__Vdly__tb_processor__DOT__cycle_count;
    if (vlSelfRef.tb_processor__DOT__rst_n) {
        vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
            = ((1U & vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U]) 
               | (((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_rdata) 
                   << 8U) | (((0x0000007cU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
                                              >> 0x0000000aU)) 
                              | (3U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
                                       >> 5U))) << 1U)));
        vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[1U] 
            = (((1U & ((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_rdata) 
                       >> 0x00000018U)) | (((0x0000007cU 
                                             & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
                                                >> 0x0000000aU)) 
                                            | (3U & 
                                               (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
                                                >> 5U))) 
                                           >> 0x0000001fU)) 
               | ((0x000000feU & ((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_rdata) 
                                  >> 0x00000018U)) 
                  | ((IData)((vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_rdata 
                              >> 0x00000020U)) << 8U)));
        vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[2U] 
            = ((0xffffff00U & vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[2U]) 
               | ((1U & ((IData)((vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_rdata 
                                  >> 0x00000020U)) 
                         >> 0x00000018U)) | (0x000000feU 
                                             & ((IData)(
                                                        (vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_rdata 
                                                         >> 0x00000020U)) 
                                                >> 0x00000018U))));
        vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[2U] 
            = ((0x000000ffU & vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[2U]) 
               | ((IData)((((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[4U])) 
                            << 0x0000002fU) | (((QData)((IData)(
                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[3U])) 
                                                << 0x0000000fU) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U])) 
                                                  >> 0x00000011U)))) 
                  << 8U));
        vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[3U] 
            = (((IData)((((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[4U])) 
                          << 0x0000002fU) | (((QData)((IData)(
                                                              vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[3U])) 
                                              << 0x0000000fU) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U])) 
                                                >> 0x00000011U)))) 
                >> 0x00000018U) | ((IData)(((((QData)((IData)(
                                                              vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[4U])) 
                                              << 0x0000002fU) 
                                             | (((QData)((IData)(
                                                                 vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[3U])) 
                                                 << 0x0000000fU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U])) 
                                                   >> 0x00000011U))) 
                                            >> 0x00000020U)) 
                                   << 8U));
        vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[4U] 
            = ((IData)(((((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[4U])) 
                          << 0x0000002fU) | (((QData)((IData)(
                                                              vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[3U])) 
                                              << 0x0000000fU) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U])) 
                                                >> 0x00000011U))) 
                        >> 0x00000020U)) >> 0x00000018U);
        vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
            = ((0xfffffffeU & vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U]) 
               | (1U & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U]));
        vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
            = ((0x00000fffU & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U]) 
               | (((IData)((((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                             << 0x00000038U) | (((QData)((IData)(
                                                                 vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U])) 
                                                 << 0x00000018U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                                   >> 8U)))) 
                   << 0x00000011U) | (0x0001f000U & 
                                      (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                       >> 0x0000000dU))));
        vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[1U] 
            = ((0x00000fffU & ((IData)((((QData)((IData)(
                                                         vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                         << 0x00000038U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U])) 
                                            << 0x00000018U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                              >> 8U)))) 
                               >> 0x0000000fU)) | (
                                                   (0x0001f000U 
                                                    & ((IData)(
                                                               (((QData)((IData)(
                                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                                                 << 0x00000038U) 
                                                                | (((QData)((IData)(
                                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U])) 
                                                                    << 0x00000018U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                                                      >> 8U)))) 
                                                       >> 0x0000000fU)) 
                                                   | ((IData)(
                                                              ((((QData)((IData)(
                                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                                                 << 0x00000038U) 
                                                                | (((QData)((IData)(
                                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U])) 
                                                                    << 0x00000018U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                                                      >> 8U))) 
                                                               >> 0x00000020U)) 
                                                      << 0x00000011U)));
        vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] 
            = ((0x00000fffU & ((IData)(((((QData)((IData)(
                                                          vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                          << 0x00000038U) 
                                         | (((QData)((IData)(
                                                             vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U])) 
                                             << 0x00000018U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                               >> 8U))) 
                                        >> 0x00000020U)) 
                               >> 0x0000000fU)) | (
                                                   (0x0001f000U 
                                                    & ((IData)(
                                                               ((((QData)((IData)(
                                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U])) 
                                                                  << 0x00000038U) 
                                                                 | (((QData)((IData)(
                                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U])) 
                                                                     << 0x00000018U) 
                                                                    | ((QData)((IData)(
                                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U])) 
                                                                       >> 8U))) 
                                                                >> 0x00000020U)) 
                                                       >> 0x0000000fU)) 
                                                   | ((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_alu_result) 
                                                      << 0x00000011U)));
        vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[3U] 
            = ((0x00000fffU & ((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_alu_result) 
                               >> 0x0000000fU)) | (
                                                   (0x0001f000U 
                                                    & ((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_alu_result) 
                                                       >> 0x0000000fU)) 
                                                   | ((IData)(
                                                              (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_alu_result 
                                                               >> 0x00000020U)) 
                                                      << 0x00000011U)));
        vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[4U] 
            = ((0xfffe0000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[4U]) 
               | ((0x00000fffU & ((IData)((vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_alu_result 
                                           >> 0x00000020U)) 
                                  >> 0x0000000fU)) 
                  | (0x0001f000U & ((IData)((vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_alu_result 
                                             >> 0x00000020U)) 
                                    >> 0x0000000fU))));
        vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[4U] 
            = ((0x0001ffffU & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[4U]) 
               | ((IData)((((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[9U])) 
                            << 0x00000038U) | (((QData)((IData)(
                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[8U])) 
                                                << 0x00000018U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                                  >> 8U)))) 
                  << 0x00000011U));
        vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[5U] 
            = (((IData)((((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[9U])) 
                          << 0x00000038U) | (((QData)((IData)(
                                                              vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[8U])) 
                                              << 0x00000018U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                                >> 8U)))) 
                >> 0x0000000fU) | ((IData)(((((QData)((IData)(
                                                              vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[9U])) 
                                              << 0x00000038U) 
                                             | (((QData)((IData)(
                                                                 vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[8U])) 
                                                 << 0x00000018U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                                   >> 8U))) 
                                            >> 0x00000020U)) 
                                   << 0x00000011U));
        vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[6U] 
            = ((IData)(((((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[9U])) 
                          << 0x00000038U) | (((QData)((IData)(
                                                              vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[8U])) 
                                              << 0x00000018U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U])) 
                                                >> 8U))) 
                        >> 0x00000020U)) >> 0x0000000fU);
        vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
            = ((0xfffff03fU & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U]) 
               | (((0x00000038U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                   >> 0x00000013U)) 
                   | (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                            >> 0x0000000aU))) << 6U));
        vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
            = ((0xffffffc0U & vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U]) 
               | ((0x00000020U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                  >> 4U)) | ((0x0000001cU 
                                              & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                                 >> 1U)) 
                                             | ((2U 
                                                 & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                                    >> 1U)) 
                                                | (1U 
                                                   & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U])))));
        if (((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__flush_id) 
             | (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__stall_if))) {
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                = Vtb_processor__ConstPool__CONST_ha8c708d0_0[0U];
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[1U] 
                = Vtb_processor__ConstPool__CONST_ha8c708d0_0[1U];
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[2U] 
                = Vtb_processor__ConstPool__CONST_ha8c708d0_0[2U];
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U] 
                = Vtb_processor__ConstPool__CONST_ha8c708d0_0[3U];
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U] 
                = Vtb_processor__ConstPool__CONST_ha8c708d0_0[4U];
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U] 
                = Vtb_processor__ConstPool__CONST_ha8c708d0_0[5U];
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[6U] 
                = Vtb_processor__ConstPool__CONST_ha8c708d0_0[6U];
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U] 
                = Vtb_processor__ConstPool__CONST_ha8c708d0_0[7U];
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[8U] 
                = Vtb_processor__ConstPool__CONST_ha8c708d0_0[8U];
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[9U] 
                = Vtb_processor__ConstPool__CONST_ha8c708d0_0[9U];
        } else {
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[1U] 
                = ((0x000000ffU & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[1U]) 
                   | ((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_imm_gen__DOT__imm) 
                      << 8U));
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[2U] 
                = (((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_imm_gen__DOT__imm) 
                    >> 0x00000018U) | ((IData)((vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_imm_gen__DOT__imm 
                                                >> 0x00000020U)) 
                                       << 8U));
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U] 
                = ((0xffffff00U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U]) 
                   | ((IData)((vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_imm_gen__DOT__imm 
                               >> 0x00000020U)) >> 0x00000018U));
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U] 
                = ((0x000000ffU & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U]) 
                   | ((IData)(((0U == (0x0000001fU 
                                       & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
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
                                           : 0ULL))) 
                      << 8U));
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U] 
                = (((IData)(((0U == (0x0000001fU & 
                                     (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                      >> 0x00000015U)))
                              ? 0ULL : ((0x1eU >= (0x0000001fU 
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
                                         : 0ULL))) 
                    >> 0x00000018U) | ((IData)((((0U 
                                                  == 
                                                  (0x0000001fU 
                                                   & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                      >> 0x00000015U)))
                                                  ? 0ULL
                                                  : 
                                                 ((0x1eU 
                                                   >= 
                                                   (0x0000001fU 
                                                    & (((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                         << 0x0000000bU) 
                                                        | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                           >> 0x00000015U)) 
                                                       - (IData)(1U))))
                                                   ? 
                                                  vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                                                  [
                                                  (0x0000001fU 
                                                   & (((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                        << 0x0000000bU) 
                                                       | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                          >> 0x00000015U)) 
                                                      - (IData)(1U)))]
                                                   : 0ULL)) 
                                                >> 0x00000020U)) 
                                       << 8U));
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U] 
                = ((0xffffff00U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U]) 
                   | ((IData)((((0U == (0x0000001fU 
                                        & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
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
                                            : 0ULL)) 
                               >> 0x00000020U)) >> 0x00000018U));
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U] 
                = ((0x000000ffU & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U]) 
                   | ((IData)(((0U == (0x0000001fU 
                                       & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
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
                                           : 0ULL))) 
                      << 8U));
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[6U] 
                = (((IData)(((0U == (0x0000001fU & 
                                     (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                      >> 0x00000010U)))
                              ? 0ULL : ((0x1eU >= (0x0000001fU 
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
                                         : 0ULL))) 
                    >> 0x00000018U) | ((IData)((((0U 
                                                  == 
                                                  (0x0000001fU 
                                                   & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                      >> 0x00000010U)))
                                                  ? 0ULL
                                                  : 
                                                 ((0x1eU 
                                                   >= 
                                                   (0x0000001fU 
                                                    & (((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                         << 0x00000010U) 
                                                        | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                           >> 0x00000010U)) 
                                                       - (IData)(1U))))
                                                   ? 
                                                  vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers
                                                  [
                                                  (0x0000001fU 
                                                   & (((vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                        << 0x00000010U) 
                                                       | (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                                          >> 0x00000010U)) 
                                                      - (IData)(1U)))]
                                                   : 0ULL)) 
                                                >> 0x00000020U)) 
                                       << 8U));
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U] 
                = ((0xffffff00U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U]) 
                   | ((IData)((((0U == (0x0000001fU 
                                        & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
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
                                            : 0ULL)) 
                               >> 0x00000020U)) >> 0x00000018U));
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U] 
                = ((0x000000ffU & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U]) 
                   | ((IData)((((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[3U])) 
                                << 0x0000003fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[2U])) 
                                                    << 0x0000001fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U])) 
                                                      >> 1U)))) 
                      << 8U));
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[8U] 
                = (((IData)((((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[3U])) 
                              << 0x0000003fU) | (((QData)((IData)(
                                                                  vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[2U])) 
                                                  << 0x0000001fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U])) 
                                                    >> 1U)))) 
                    >> 0x00000018U) | ((IData)(((((QData)((IData)(
                                                                  vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[3U])) 
                                                  << 0x0000003fU) 
                                                 | (((QData)((IData)(
                                                                     vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[2U])) 
                                                     << 0x0000001fU) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U])) 
                                                       >> 1U))) 
                                                >> 0x00000020U)) 
                                       << 8U));
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[9U] 
                = ((IData)(((((QData)((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[3U])) 
                              << 0x0000003fU) | (((QData)((IData)(
                                                                  vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[2U])) 
                                                  << 0x0000001fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U])) 
                                                    >> 1U))) 
                            >> 0x00000020U)) >> 0x00000018U);
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                = ((0x003fffffU & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U]) 
                   | (((0x00001f00U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                       >> 0x0000000dU)) 
                       | ((0x000000f8U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                          >> 5U)) | 
                          (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                 >> 0x0000000dU)))) 
                      << 0x00000016U));
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[1U] 
                = ((0xfffffff8U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[1U]) 
                   | (((0x00001f00U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                       >> 0x0000000dU)) 
                       | ((0x000000f8U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                          >> 5U)) | 
                          (7U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                 >> 0x0000000dU)))) 
                      >> 0x0000000aU));
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[1U] 
                = ((0xffffff07U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[1U]) 
                   | (0x000000f8U & (vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                                     >> 0x0000000dU)));
            vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                = ((0xffc00000U & vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U]) 
                   | ((vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl 
                       << 1U) | (1U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U])));
        }
        if (vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__flush_id) {
            vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] = 0U;
            vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] = 0U;
            vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[2U] = 0U;
            vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[3U] = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__stall_if)))) {
            vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] 
                = (IData)((1ULL | ((QData)((IData)(
                                                   vlSelfRef.tb_processor__DOT__u_imem__DOT__mem
                                                   [
                                                   (0x00000fffU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_processor__DOT__u_dut__DOT__u_if_stage__DOT__pc_reg 
                                                               >> 2U)))])) 
                                   << 1U)));
            vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                = ((0xfffffffeU & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U]) 
                   | (IData)(((1ULL | ((QData)((IData)(
                                                       vlSelfRef.tb_processor__DOT__u_imem__DOT__mem
                                                       [
                                                       (0x00000fffU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_processor__DOT__u_dut__DOT__u_if_stage__DOT__pc_reg 
                                                                   >> 2U)))])) 
                                       << 1U)) >> 0x00000020U)));
            vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] 
                = ((1U & vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U]) 
                   | ((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_if_stage__DOT__pc_reg) 
                      << 1U));
            vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[2U] 
                = (((IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_if_stage__DOT__pc_reg) 
                    >> 0x0000001fU) | ((IData)((vlSelfRef.tb_processor__DOT__u_dut__DOT__u_if_stage__DOT__pc_reg 
                                                >> 0x00000020U)) 
                                       << 1U));
            vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[3U] 
                = ((IData)((vlSelfRef.tb_processor__DOT__u_dut__DOT__u_if_stage__DOT__pc_reg 
                            >> 0x00000020U)) >> 0x0000001fU);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__stall_if)))) {
            vlSelfRef.tb_processor__DOT__u_dut__DOT__u_if_stage__DOT__pc_reg 
                = vlSelfRef.tb_processor__DOT__u_dut__DOT__u_if_stage__DOT__pc_next;
        }
    } else {
        vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] = 0U;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[1U] = 0U;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[2U] = 0U;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[3U] = 0U;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[4U] = 0U;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] = 0U;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[1U] = 0U;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[2U] = 0U;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[3U] = 0U;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[4U] = 0U;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[5U] = 0U;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[6U] = 0U;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
            = Vtb_processor__ConstPool__CONST_ha8c708d0_0[0U];
        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[1U] 
            = Vtb_processor__ConstPool__CONST_ha8c708d0_0[1U];
        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[2U] 
            = Vtb_processor__ConstPool__CONST_ha8c708d0_0[2U];
        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[3U] 
            = Vtb_processor__ConstPool__CONST_ha8c708d0_0[3U];
        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[4U] 
            = Vtb_processor__ConstPool__CONST_ha8c708d0_0[4U];
        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[5U] 
            = Vtb_processor__ConstPool__CONST_ha8c708d0_0[5U];
        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[6U] 
            = Vtb_processor__ConstPool__CONST_ha8c708d0_0[6U];
        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[7U] 
            = Vtb_processor__ConstPool__CONST_ha8c708d0_0[7U];
        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[8U] 
            = Vtb_processor__ConstPool__CONST_ha8c708d0_0[8U];
        vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[9U] 
            = Vtb_processor__ConstPool__CONST_ha8c708d0_0[9U];
        vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[0U] = 0U;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[1U] = 0U;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[2U] = 0U;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__if_id_reg[3U] = 0U;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_if_stage__DOT__pc_reg = 0ULL;
    }
    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_0 
        = (vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
           & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
               >> 1U) & (0U != (0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__mem_wb_reg[0U] 
                                               >> 3U)))));
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
    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_1 
        = (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
           & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
               >> 5U) & (0U != (0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__ex_mem_reg[0U] 
                                               >> 0x0000000cU)))));
    if (vlSelfRef.__VdlySet__tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers__v0) {
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[vlSelfRef.__VdlyDim0__tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers__v0] 
            = vlSelfRef.__VdlyVal__tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers__v0;
    }
    if (vlSelfRef.__VdlySet__tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers__v1) {
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0U] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[1U] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[2U] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[3U] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[4U] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[5U] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[6U] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[7U] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[8U] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[9U] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0x0aU] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0x0bU] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0x0cU] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0x0dU] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0x0eU] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0x0fU] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0x10U] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0x11U] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0x12U] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0x13U] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0x14U] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0x15U] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0x16U] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0x17U] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0x18U] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0x19U] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0x1aU] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0x1bU] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0x1cU] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0x1dU] = 0ULL;
        vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers[0x1eU] = 0ULL;
    }
    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_2 
        = (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
           & ((vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
               >> 9U) & (0U != (0x0000001fU & (vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ex_reg[0U] 
                                               >> 0x00000019U)))));
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
    vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ecall = 0U;
    vlSelfRef.tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr = 0U;
    vlSelfRef.tb_processor__DOT__u_dut__DOT__id_ctrl = 0U;
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

void Vtb_processor___024root___nba_comb__TOP__0(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___nba_comb__TOP__0\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vtb_processor___024root___eval_nba(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_nba\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_processor___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_processor___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_processor___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_processor___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtb_processor___024root___timing_commit(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___timing_commit\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h6ddfe047__0.commit(
                                                   "@(posedge tb_processor.clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_hb8f46989__0.commit(
                                                   "@( (tb_processor.u_dut.id_ecall & tb_processor.u_dut.if_id_reg[0]))");
    }
}

void Vtb_processor___024root___timing_resume(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___timing_resume\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h6ddfe047__0.resume(
                                                   "@(posedge tb_processor.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hb8f46989__0.resume(
                                                   "@( (tb_processor.u_dut.id_ecall & tb_processor.u_dut.if_id_reg[0]))");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_processor___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_processor___024root___eval_phase__act(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_phase__act\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_processor___024root___eval_triggers__act(vlSelf);
    Vtb_processor___024root___timing_commit(vlSelf);
    Vtb_processor___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_processor___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vtb_processor___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vtb_processor___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_processor___024root___eval_phase__nba(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_phase__nba\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_processor___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_processor___024root___eval_nba(vlSelf);
        Vtb_processor___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_processor___024root___eval(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_processor___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("../tb/tb_processor.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_processor___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("../tb/tb_processor.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtb_processor___024root___eval_phase__act(vlSelf));
    } while (Vtb_processor___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtb_processor___024root___eval_debug_assertions(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_debug_assertions\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
