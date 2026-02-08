# Makefile for RISC-V 64I-Zba Processor Simulation

# Directories
RTL_DIR = ../rtl
TB_DIR = ../tb
SW_DIR = ../sw

# RTL Source Files
RTL_SRCS = \
	$(RTL_DIR)/riscv_pkg.sv \
	$(RTL_DIR)/register_file.sv \
	$(RTL_DIR)/alu.sv \
	$(RTL_DIR)/immediate_gen.sv \
	$(RTL_DIR)/decoder.sv \
	$(RTL_DIR)/hazard_unit.sv \
	$(RTL_DIR)/pipeline_regs.sv \
	$(RTL_DIR)/if_stage.sv \
	$(RTL_DIR)/id_stage.sv \
	$(RTL_DIR)/ex_stage.sv \
	$(RTL_DIR)/mem_stage.sv \
	$(RTL_DIR)/wb_stage.sv \
	$(RTL_DIR)/processor_top.sv

# Testbench Files
TB_SRCS = \
	$(TB_DIR)/imem.sv \
	$(TB_DIR)/dmem.sv \
	$(TB_DIR)/tb_processor.sv

# All sources
ALL_SRCS = $(RTL_SRCS) $(TB_SRCS)

# Default target
.PHONY: all
all: sim

#------------------------------------------------------------------------------
# Icarus Verilog Simulation
#------------------------------------------------------------------------------
IVERILOG = iverilog
VVP = vvp
IVERILOG_FLAGS = -g2012 -Wall

sim: compile
	$(VVP) sim.vvp

compile: $(ALL_SRCS)
	$(IVERILOG) $(IVERILOG_FLAGS) -o sim.vvp -s tb_processor $(ALL_SRCS)

#------------------------------------------------------------------------------
# Verilator Simulation
#------------------------------------------------------------------------------
VERILATOR = verilator
VERILATOR_FLAGS = --cc --exe --build --trace --timing \
	-Wno-fatal -Wno-TIMESCALEMOD -Wno-DECLFILENAME -Wno-WIDTHEXPAND \
	-Wno-WIDTHTRUNC -Wno-UNUSEDSIGNAL -Wno-UNUSEDPARAM -Wno-LATCH -Wno-SYNCASYNCNET

.PHONY: verilator
verilator: $(ALL_SRCS) verilator_main.cpp
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module tb_processor \
		$(ALL_SRCS) \
		verilator_main.cpp \
		-o Vtb_processor

verilator_main.cpp:
	@echo "Creating Verilator main file..."
	@echo '#include "Vtb_processor.h"' > $@
	@echo '#include "verilated.h"' >> $@
	@echo '#include "verilated_vcd_c.h"' >> $@
	@echo 'int main(int argc, char** argv) {' >> $@
	@echo '    Verilated::commandArgs(argc, argv);' >> $@
	@echo '    Vtb_processor* top = new Vtb_processor;' >> $@
	@echo '    while (!Verilated::gotFinish()) { top->eval(); }' >> $@
	@echo '    delete top;' >> $@
	@echo '    return 0;' >> $@
	@echo '}' >> $@

#------------------------------------------------------------------------------
# Waveform Viewing
#------------------------------------------------------------------------------
.PHONY: wave
wave: processor.vcd
	gtkwave processor.vcd &

#------------------------------------------------------------------------------
# Software Build (requires RISC-V toolchain)
#------------------------------------------------------------------------------
RISCV_PREFIX = riscv64-elf-
RISCV_GCC = $(RISCV_PREFIX)gcc
RISCV_OBJCOPY = $(RISCV_PREFIX)objcopy
RISCV_OBJDUMP = $(RISCV_PREFIX)objdump

RISCV_CFLAGS = -O2 -march=rv64i_zba -mabi=lp64 -ffreestanding -nostdlib

.PHONY: sw
sw: test.hex

test.elf: $(SW_DIR)/startup.s $(SW_DIR)/test.c $(SW_DIR)/linker.ld
	$(RISCV_GCC) $(RISCV_CFLAGS) -T $(SW_DIR)/linker.ld \
		$(SW_DIR)/startup.s $(SW_DIR)/test.c -o $@

test.hex: test.elf
	$(RISCV_OBJCOPY) -O verilog --verilog-data-width=4 $< $@
	$(RISCV_OBJDUMP) -d $< > test.disasm

#------------------------------------------------------------------------------
# Lint with Verilator
#------------------------------------------------------------------------------
.PHONY: lint
lint:
	$(VERILATOR) --lint-only -Wall $(RTL_SRCS)

#------------------------------------------------------------------------------
# Clean
#------------------------------------------------------------------------------
.PHONY: clean
clean:
	rm -f sim.vvp processor.vcd
	rm -f test.elf test.hex test.disasm
	rm -rf obj_dir
	rm -f verilator_main.cpp

.PHONY: cleanall
cleanall: clean
	rm -f *.vcd *.hex *.elf *.disasm

#------------------------------------------------------------------------------
# Help
#------------------------------------------------------------------------------
.PHONY: help
help:
	@echo "RISC-V 64I-Zba Processor Simulation Makefile"
	@echo ""
	@echo "Targets:"
	@echo "  all/sim     - Run simulation with Icarus Verilog (default)"
	@echo "  compile     - Compile with Icarus Verilog"
	@echo "  verilator   - Build and run with Verilator"
	@echo "  lint        - Lint RTL with Verilator"
	@echo "  sw          - Build test software (requires RISC-V toolchain)"
	@echo "  wave        - Open waveform in GTKWave"
	@echo "  clean       - Remove generated files"
	@echo "  cleanall    - Remove all generated files"
	@echo "  help        - Show this help message"
