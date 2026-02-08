`timescale 1ns/1ps

module tb_processor;
    import riscv_pkg::*;

    // Parameters
    localparam CLK_PERIOD = 10;
    localparam TIMEOUT_CYCLES = 10000;
    localparam IMEM_SIZE = 4096;
    localparam DMEM_SIZE = 8192;

    // Signals
    logic        clk;
    logic        rst_n;
    logic [63:0] imem_addr;
    logic [31:0] imem_rdata;
    logic [63:0] dmem_addr;
    logic [63:0] dmem_wdata;
    logic [7:0]  dmem_byte_en;
    logic        dmem_wen;
    logic [63:0] dmem_rdata;
    logic        ecall;

    // Clock generation
    initial begin
        clk = 0;
        forever #(CLK_PERIOD/2) clk = ~clk;
    end

    // DUT
    processor_top u_dut (
        .clk          (clk),
        .rst_n        (rst_n),
        .imem_addr    (imem_addr),
        .imem_rdata   (imem_rdata),
        .dmem_addr    (dmem_addr),
        .dmem_wdata   (dmem_wdata),
        .dmem_byte_en (dmem_byte_en),
        .dmem_wen     (dmem_wen),
        .dmem_rdata   (dmem_rdata),
        .ecall_o      (ecall)
    );

    // Instruction memory
    imem #(
        .MEM_SIZE  (IMEM_SIZE),
        .INIT_FILE ("test.hex")
    ) u_imem (
        .addr  (imem_addr),
        .rdata (imem_rdata)
    );

    // Data memory
    dmem #(
        .MEM_SIZE (DMEM_SIZE)
    ) u_dmem (
        .clk     (clk),
        .addr    (dmem_addr),
        .wdata   (dmem_wdata),
        .byte_en (dmem_byte_en),
        .wen     (dmem_wen),
        .rdata   (dmem_rdata)
    );

    // Cycle counter
    int cycle_count;
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            cycle_count <= 0;
        else
            cycle_count <= cycle_count + 1;
    end

    // Instruction trace
    always_ff @(posedge clk) begin
        if (rst_n && u_dut.if_id_reg.valid) begin
            $display("[%0t] Cycle %0d: PC=0x%016h Instr=0x%08h",
                     $time, cycle_count, u_dut.if_id_reg.pc, u_dut.if_id_reg.instr);
        end
    end

    // Memory access trace
    always_ff @(posedge clk) begin
        if (rst_n && dmem_wen) begin
            $display("[%0t] MEM WRITE: addr=0x%016h data=0x%016h byte_en=0x%02h",
                     $time, dmem_addr, dmem_wdata, dmem_byte_en);
        end
    end

    // Register writeback trace
    always_ff @(posedge clk) begin
        if (rst_n && u_dut.wb_rd_wen && u_dut.wb_rd_addr != 0) begin
            $display("[%0t] REG WRITE: x%0d = 0x%016h",
                     $time, u_dut.wb_rd_addr, u_dut.wb_rd_data);
        end
    end

    // Test sequence
    initial begin
        $display("========================================");
        $display("RISC-V 64I-Zba Processor Testbench");
        $display("========================================");

        // Initialize
        rst_n = 0;
        repeat(5) @(posedge clk);
        rst_n = 1;
        $display("[%0t] Reset released", $time);

        // Wait for ECALL or timeout
        fork
            begin
                wait(ecall);
                $display("\n========================================");
                $display("[%0t] ECALL detected - Test completed", $time);
                $display("Total cycles: %0d", cycle_count);
                $display("========================================");
            end
            begin
                repeat(TIMEOUT_CYCLES) @(posedge clk);
                $display("\n========================================");
                $display("[%0t] TIMEOUT after %0d cycles", $time, TIMEOUT_CYCLES);
                $display("========================================");
            end
        join_any
        disable fork;

        // Display final register state
        $display("\nFinal Register State:");
        for (int i = 0; i < 32; i++) begin
            if (i == 0)
                $display("  x%0d  = 0x0000000000000000 (hardwired)", i);
            else
                $display("  x%-2d = 0x%016h", i, u_dut.u_id_stage.u_regfile.registers[i]);
        end

        // Display memory contents (first 64 bytes of data memory)
        $display("\nData Memory (first 64 bytes):");
        for (int i = 0; i < 64; i += 8) begin
            $display("  0x%04h: %02h %02h %02h %02h %02h %02h %02h %02h",
                     i,
                     u_dmem.mem[i+0], u_dmem.mem[i+1], u_dmem.mem[i+2], u_dmem.mem[i+3],
                     u_dmem.mem[i+4], u_dmem.mem[i+5], u_dmem.mem[i+6], u_dmem.mem[i+7]);
        end

        $display("\n========================================");
        $display("Simulation finished");
        $display("========================================");

        $finish;
    end

    // VCD dump
    initial begin
        $dumpfile("processor.vcd");
        $dumpvars(0, tb_processor);
    end

endmodule
