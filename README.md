# RISC-V 64I-Zba Processor

A 5-stage pipelined RISC-V 64-bit processor implementing the RV64I base integer instruction set with the Zba (address generation) extension.

## Features

- **Architecture**: RV64I base instruction set + Zba extension
- **Pipeline**: 5-stage (IF, ID, EX, MEM, WB)
- **Hazard Handling**: Stall-only (no forwarding)
- **Data Width**: 64-bit
- **Memory**: Separate instruction and data memories

### Supported Instructions

#### RV64I Base Instructions
- **R-type**: ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND
- **R-type (W)**: ADDW, SUBW, SLLW, SRLW, SRAW
- **I-type**: ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI
- **I-type (W)**: ADDIW, SLLIW, SRLIW, SRAIW
- **Load**: LB, LH, LW, LD, LBU, LHU, LWU
- **Store**: SB, SH, SW, SD
- **Branch**: BEQ, BNE, BLT, BGE, BLTU, BGEU
- **Jump**: JAL, JALR
- **Upper Immediate**: LUI, AUIPC
- **System**: ECALL

#### Zba Extension Instructions
| Instruction | Operation | Use Case |
|-------------|-----------|----------|
| SH1ADD | rd = rs2 + (rs1 << 1) | 16-bit array indexing |
| SH2ADD | rd = rs2 + (rs1 << 2) | 32-bit array indexing |
| SH3ADD | rd = rs2 + (rs1 << 3) | 64-bit array indexing |
| SH1ADD.UW | rd = rs2 + (zext(rs1[31:0]) << 1) | 16-bit array, 32-bit index |
| SH2ADD.UW | rd = rs2 + (zext(rs1[31:0]) << 2) | 32-bit array, 32-bit index |
| SH3ADD.UW | rd = rs2 + (zext(rs1[31:0]) << 3) | 64-bit array, 32-bit index |
| ADD.UW | rd = rs2 + zext(rs1[31:0]) | Add unsigned word |
| SLLI.UW | rd = zext(rs1[31:0]) << shamt | Zero-extend and shift |

## Directory Structure

```
RISC-V_64I-Zba_Processor/
├── README.md                   # This file
├── doc/
│   └── specification.txt       # Detailed design specification
├── rtl/
│   ├── riscv_pkg.sv           # Package: opcodes, types, constants
│   ├── processor_top.sv       # Top-level processor
│   ├── if_stage.sv            # Instruction fetch stage
│   ├── id_stage.sv            # Instruction decode stage
│   ├── ex_stage.sv            # Execute stage
│   ├── mem_stage.sv           # Memory access stage
│   ├── wb_stage.sv            # Writeback stage
│   ├── register_file.sv       # 32x64-bit register file
│   ├── alu.sv                 # ALU with Zba support
│   ├── decoder.sv             # Instruction decoder
│   ├── immediate_gen.sv       # Immediate value generator
│   ├── hazard_unit.sv         # Hazard detection (stall logic)
│   └── pipeline_regs.sv       # Pipeline registers
├── tb/
│   ├── tb_processor.sv        # Main testbench
│   ├── imem.sv                # Instruction memory model
│   └── dmem.sv                # Data memory model
├── sw/
│   ├── test.c                 # Test program in C
│   ├── startup.s              # Startup assembly code
│   ├── linker.ld              # Linker script
│   └── build_commands.txt     # RISC-V toolchain commands
└── sim/
    └── Makefile               # Simulation Makefile
```

## Pipeline Architecture

```
┌─────────┐   ┌─────────┐   ┌─────────┐   ┌─────────┐   ┌─────────┐
│   IF    │──▶│   ID    │──▶│   EX    │──▶│   MEM   │──▶│   WB    │
│ (Fetch) │   │(Decode) │   │(Execute)│   │(Memory) │   │(Write)  │
└─────────┘   └─────────┘   └─────────┘   └─────────┘   └─────────┘
     │             │             │             │             │
     └─────────────┴─────────────┴─────────────┴─────────────┘
                        Hazard Detection (Stall)
```

## Interfaces

### Top-Level Processor Interface
```systemverilog
module processor_top (
    input  logic        clk,
    input  logic        rst_n,          // Active-low async reset
    // Instruction Memory Interface
    output logic [63:0] imem_addr,      // PC value
    input  logic [31:0] imem_rdata,     // Instruction
    // Data Memory Interface
    output logic [63:0] dmem_addr,      // Address
    output logic [63:0] dmem_wdata,     // Write data
    output logic [7:0]  dmem_byte_en,   // Byte enables
    output logic        dmem_wen,       // Write enable
    input  logic [63:0] dmem_rdata,     // Read data
    // Status
    output logic        ecall_o         // ECALL detected
);
```

## Quick Start

### Prerequisites
- **Simulator**: Icarus Verilog or Verilator
- **Waveform Viewer**: GTKWave (optional)
- **RISC-V Toolchain**: riscv64-unknown-elf-gcc (for building test programs)

### Running Simulation

1. **Using Icarus Verilog** (default):
```bash
cd sim
make sim
```

2. **Using Verilator**:
```bash
cd sim
make verilator
```

3. **View waveforms**:
```bash
make wave
```

### Building Test Software

If you have the RISC-V toolchain installed:
```bash
cd sim
make sw
```

Or manually (see `sw/build_commands.txt` for details):
```bash
riscv64-unknown-elf-gcc -O2 -march=rv64i_zba -mabi=lp64 \
    -ffreestanding -nostdlib -T linker.ld \
    startup.s test.c -o test.elf
riscv64-unknown-elf-objcopy -O verilog --verilog-data-width=4 \
    test.elf test.hex
```

## Test Program

The included test program (`sw/test.c`) demonstrates:
1. Basic arithmetic operations (ADD, SUB, AND, OR, XOR, shifts)
2. Memory access (LD, SD, LW, SW, LH, SH, LB, SB)
3. Branching logic (BEQ, BNE, BLT, BGE, loops)
4. Zba extension instructions (SH1ADD, SH2ADD, SH3ADD)

## Hazard Handling

This implementation uses **stall-only** hazard handling:
- **Data Hazards**: Detected by comparing destination registers in EX/MEM/WB stages with source registers in ID stage. Pipeline stalls until the hazard is resolved.
- **Control Hazards**: Branch/jump decisions are made in the EX stage. On taken branches or jumps, the IF/ID and ID/EX registers are flushed (2-cycle penalty).

## Design Decisions

| Feature | Choice | Rationale |
|---------|--------|-----------|
| Pipeline Depth | 5-stage | Classic RISC design, clean stage separation |
| Hazard Handling | Stall-only | Simpler implementation, meets challenge requirements |
| Branch Resolution | EX stage | Standard 5-stage pipeline approach |
| Reset | Active-low async | Industry standard |
| Memory | Single-cycle | Simplified for this implementation |

## License

This project was created for the LFX Mentorship RISC-V Vector Coding Challenge.

## References

- [RISC-V Unprivileged ISA Specification](https://riscv.org/technical/specifications/)
- [RISC-V Bitmanip Extension (Zba)](https://github.com/riscv/riscv-bitmanip)
