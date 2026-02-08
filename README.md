# RISC-V 64I-Zba Processor

A 5-stage pipelined RISC-V 64-bit processor implementing the RV64I base integer instruction set with the Zba (address generation) extension.

## Features

- **Architecture**: RV64I base + Zba extension
- **Pipeline**: 5-stage (IF, ID, EX, MEM, WB)
- **Hazard Handling**: Stall-only (no forwarding)
- **Memory**: Separate instruction and data memories

## Project Structure

```
RISC-V_64I-Zba_Processor/
├── DesignDiagram.pdf          # Pipeline architecture diagram
├── rtl/                       # RTL Implementation
│   ├── riscv_pkg.sv          # Package: types, constants
│   ├── processor_top.sv      # Top-level processor
│   ├── if_stage.sv           # Instruction fetch
│   ├── id_stage.sv           # Instruction decode
│   ├── ex_stage.sv           # Execute
│   ├── mem_stage.sv          # Memory access
│   ├── wb_stage.sv           # Writeback
│   ├── register_file.sv      # 32x64-bit registers
│   ├── alu.sv                # ALU with Zba support
│   ├── decoder.sv            # Instruction decoder
│   ├── immediate_gen.sv      # Immediate generator
│   └── hazard_unit.sv        # Hazard detection
├── tb/                        # Testbench
│   ├── tb_processor.sv       # Main testbench with assertions
│   ├── imem.sv               # Instruction memory
│   └── dmem.sv               # Data memory
├── sw/                        # Test Software
│   ├── test.c                # Test program
│   ├── build_commands.txt    # Toolchain commands
│   ├── startup.s             # Startup code
│   └── linker.ld             # Linker script
└── sim/                       # Simulation
    └── Makefile              # Build/run scripts
```

## Deliverables

### 1. Design Diagram (`DesignDiagram.pdf`)
Color-coded pipeline diagram showing:
- Datapath components (ALU, registers, PC, muxes)
- Control signals and hazard unit
- Pipeline registers (IF/ID, ID/EX, EX/MEM, MEM/WB)
- Memory interfaces
- Zba-specific logic (purple)

### 2. RTL Implementation (`rtl/`)
Synthesizable SystemVerilog with clear module hierarchy:

| Module | Description |
|--------|-------------|
| `processor_top` | Top-level with memory interfaces |
| `if_stage` | PC management, instruction fetch |
| `id_stage` | Decode, register file, immediate gen |
| `ex_stage` | ALU operations, branch logic |
| `mem_stage` | Load/store data alignment |
| `wb_stage` | Writeback mux |
| `hazard_unit` | Stall and flush control |
| `alu` | RV64I + Zba operations |

### 3. Test Program (`sw/test.c`)
Demonstrates:
- Basic arithmetic (ADD, SUB, AND, OR, XOR, shifts)
- Memory access (LD, SD, LW, SW, LH, LB)
- Branching logic (BEQ, BNE, BLT, BGE)
- **Zba instructions**:
  - `SH1ADD` - 16-bit array indexing
  - `SH2ADD` - 32-bit array indexing  
  - `SH3ADD` - 64-bit array indexing

### 4. Toolchain Commands (`sw/build_commands.txt`)
Complete build flow:
```bash
# Compile C to assembly
riscv64-unknown-elf-gcc -S -O2 -march=rv64i_zba -mabi=lp64 test.c -o test.s

# Assemble to object
riscv64-unknown-elf-as -march=rv64i_zba test.s -o test.o

# Link to ELF
riscv64-unknown-elf-ld -T linker.ld startup.o test.o -o test.elf

# Extract hex for simulation
riscv64-unknown-elf-objcopy -O verilog test.elf test.hex
```

### 5. Testbench (`tb/tb_processor.sv`)
Features:
- Clock generation (10ns period)
- Async reset sequence
- Instruction memory initialization from hex
- Data memory monitoring
- Register value checking
- **Self-checking assertions** for:
  - Stack pointer initialization
  - Return address (JAL/JALR)
  - Memory operations (LD/SD)
  - Branch tests (BNE, BGE)
  - Zba instruction results
- ECALL-based simulation termination

## Quick Start

### Prerequisites
- Verilator (or Icarus Verilog)
- RISC-V toolchain (`riscv64-unknown-elf-gcc`)

### Run Simulation
```bash
cd sim
make verilator    # Compile RTL
make sw           # Build test program (requires toolchain)
./obj_dir/Vtb_processor  # Run simulation
```

### Expected Output
```
ASSERTION SUMMARY: 7 passed, 0 failed
*** ALL TESTS PASSED ***
```

## Supported Instructions

### RV64I Base
| Type | Instructions |
|------|--------------|
| R-type | ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND |
| R-type (W) | ADDW, SUBW, SLLW, SRLW, SRAW |
| I-type | ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI |
| Load | LB, LH, LW, LD, LBU, LHU, LWU |
| Store | SB, SH, SW, SD |
| Branch | BEQ, BNE, BLT, BGE, BLTU, BGEU |
| Jump | JAL, JALR |
| Upper | LUI, AUIPC |

### Zba Extension
| Instruction | Operation | Use Case |
|-------------|-----------|----------|
| SH1ADD | rd = rs2 + (rs1 << 1) | 16-bit array indexing |
| SH2ADD | rd = rs2 + (rs1 << 2) | 32-bit array indexing |
| SH3ADD | rd = rs2 + (rs1 << 3) | 64-bit array indexing |
| ADD.UW | rd = rs2 + zext(rs1[31:0]) | Unsigned word add |
| SLLI.UW | rd = zext(rs1[31:0]) << shamt | Zero-extend and shift |

## Design Decisions

| Feature | Choice | Rationale |
|---------|--------|-----------|
| Pipeline | 5-stage | Classic RISC, clean separation |
| Hazards | Stall-only | Simple, correct implementation |
| Branch | EX stage | Standard 5-stage approach |
| Reset | Active-low async | Industry standard |

---
*Created for LFX Mentorship RISC-V Vector Coding Challenge*
