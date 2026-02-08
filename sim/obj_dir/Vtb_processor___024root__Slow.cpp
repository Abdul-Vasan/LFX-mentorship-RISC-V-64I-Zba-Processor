// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_processor.h for the primary calling header

#include "Vtb_processor__pch.h"

void Vtb_processor___024root___ctor_var_reset(Vtb_processor___024root* vlSelf);

Vtb_processor___024root::Vtb_processor___024root(Vtb_processor__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_processor___024root___ctor_var_reset(this);
}

void Vtb_processor___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_processor___024root::~Vtb_processor___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
