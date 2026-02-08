// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_processor.h for the primary calling header

#ifndef VERILATED_VTB_PROCESSOR___024ROOT_H_
#define VERILATED_VTB_PROCESSOR___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_processor__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_processor___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_processor__DOT__clk;
    CData/*0:0*/ tb_processor__DOT__rst_n;
    CData/*7:0*/ tb_processor__DOT__dmem_byte_en;
    CData/*0:0*/ tb_processor__DOT__u_dut__DOT__id_ecall;
    CData/*2:0*/ tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__imm_type;
    CData/*0:0*/ tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__illegal_instr;
    CData/*0:0*/ tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__jump;
    CData/*0:0*/ tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__stall_if;
    CData/*0:0*/ tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT__flush_id;
    CData/*0:0*/ tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_0;
    CData/*0:0*/ tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_1;
    CData/*0:0*/ tb_processor__DOT__u_dut__DOT__u_hazard_unit__DOT____VdfgRegularize_h1ba04957_0_2;
    CData/*4:0*/ __VdlyDim0__tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers__v0;
    CData/*0:0*/ __VdlySet__tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers__v0;
    CData/*0:0*/ __VdlySet__tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers__v1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_processor__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_processor__DOT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr_h2d43a386__1;
    CData/*0:0*/ __VactDidInit;
    IData/*31:0*/ tb_processor__DOT__cycle_count;
    IData/*31:0*/ tb_processor__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ tb_processor__DOT__unnamedblk2__DOT__i;
    IData/*20:0*/ tb_processor__DOT__u_dut__DOT__id_ctrl;
    IData/*31:0*/ tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__word_result;
    IData/*31:0*/ tb_processor__DOT__u_imem__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ tb_processor__DOT__u_dmem__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__1__val;
    IData/*31:0*/ __Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__2__val;
    IData/*31:0*/ __Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__3__val;
    IData/*31:0*/ __Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__4__val;
    IData/*31:0*/ __Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__5__val;
    IData/*31:0*/ __Vdly__tb_processor__DOT__cycle_count;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb_processor__DOT__dmem_wdata;
    VlWide<4>/*96:0*/ tb_processor__DOT__u_dut__DOT__if_id_reg;
    VlWide<10>/*295:0*/ tb_processor__DOT__u_dut__DOT__id_ex_reg;
    QData/*63:0*/ tb_processor__DOT__u_dut__DOT__ex_alu_result;
    VlWide<7>/*208:0*/ tb_processor__DOT__u_dut__DOT__ex_mem_reg;
    QData/*63:0*/ tb_processor__DOT__u_dut__DOT__mem_rdata;
    VlWide<5>/*135:0*/ tb_processor__DOT__u_dut__DOT__mem_wb_reg;
    QData/*63:0*/ tb_processor__DOT__u_dut__DOT__u_if_stage__DOT__pc_reg;
    QData/*63:0*/ tb_processor__DOT__u_dut__DOT__u_if_stage__DOT__pc_next;
    QData/*63:0*/ tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_imm_gen__DOT__imm;
    QData/*63:0*/ tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT____Vlvbound_h0d75228f__0;
    QData/*63:0*/ tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_a;
    QData/*63:0*/ tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__operand_b;
    QData/*63:0*/ tb_processor__DOT__u_dut__DOT__u_mem_stage__DOT__aligned_wdata;
    QData/*63:0*/ tb_processor__DOT__u_dut__DOT__u_mem_stage__DOT__aligned_rdata;
    QData/*63:0*/ __Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__1__Vfuncout;
    QData/*63:0*/ __Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__2__Vfuncout;
    QData/*63:0*/ __Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__3__Vfuncout;
    QData/*63:0*/ __Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__4__Vfuncout;
    QData/*63:0*/ __Vfunc_tb_processor__DOT__u_dut__DOT__u_ex_stage__DOT__u_alu__DOT__sext_w__5__Vfuncout;
    QData/*63:0*/ __VdlyVal__tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers__v0;
    VlUnpacked<QData/*63:0*/, 31> tb_processor__DOT__u_dut__DOT__u_id_stage__DOT__u_regfile__DOT__registers;
    VlUnpacked<IData/*31:0*/, 4096> tb_processor__DOT__u_imem__DOT__mem;
    VlUnpacked<CData/*7:0*/, 8192> tb_processor__DOT__u_dmem__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h6ddfe047__0;
    VlTriggerScheduler __VtrigSched_hb8f46989__0;

    // INTERNAL VARIABLES
    Vtb_processor__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_processor___024root(Vtb_processor__Syms* symsp, const char* namep);
    ~Vtb_processor___024root();
    VL_UNCOPYABLE(Vtb_processor___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
