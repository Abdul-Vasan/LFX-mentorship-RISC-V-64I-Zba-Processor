#include "Vtb_processor.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vtb_processor* top = new Vtb_processor;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("processor.vcd");

    while (!Verilated::gotFinish()) {
        top->eval();
        tfp->dump(Verilated::time());
        Verilated::timeInc(1);
    }

    tfp->close();
    delete tfp;
    delete top;
    return 0;
}
