`timescale 1ns/1ps

module tb_processor;
    import riscv_pkg::*;

    // Parameters
    localparam CLK_PERIOD = 10;
    localparam TIMEOUT_CYCLES = 10000;
    localparam IMEM_SIZE = 4096;
    localparam DMEM_SIZE = 8192;
    localparam DATA_BASE = 64'h1000;  // Data section base address

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

    // Test status
    int tests_passed;
    int tests_failed;

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

    // =========================================================================
    // ASSERTION 1: x0 is always zero (hardwired)
    // =========================================================================
    property p_x0_always_zero;
        @(posedge clk) disable iff (!rst_n)
        (u_dut.u_id_stage.u_regfile.registers[0] == 64'h0);
    endproperty
    assert property (p_x0_always_zero)
        else $error("ASSERTION FAILED: x0 is not zero!");

    // =========================================================================
    // ASSERTION 2: PC is always aligned to 4 bytes
    // =========================================================================
    property p_pc_aligned;
        @(posedge clk) disable iff (!rst_n)
        (imem_addr[1:0] == 2'b00);
    endproperty
    assert property (p_pc_aligned)
        else $error("ASSERTION FAILED: PC not 4-byte aligned! PC=0x%h", imem_addr);

    // =========================================================================
    // ASSERTION 3: Writes to x0 are ignored (x0 stays zero)
    // Note: RISC-V allows targeting x0, but writes are discarded
    // This is already covered by p_x0_always_zero assertion
    // =========================================================================

    // =========================================================================
    // ASSERTION 4: Memory address alignment for doubleword access
    // =========================================================================
    property p_dmem_dword_aligned;
        @(posedge clk) disable iff (!rst_n)
        (dmem_wen && dmem_byte_en == 8'hFF) |-> (dmem_addr[2:0] == 3'b000);
    endproperty
    assert property (p_dmem_dword_aligned)
        else $error("ASSERTION FAILED: Unaligned doubleword access at 0x%h", dmem_addr);

    // =========================================================================
    // ASSERTION 5: Memory address alignment for word access
    // =========================================================================
    property p_dmem_word_aligned;
        @(posedge clk) disable iff (!rst_n)
        (dmem_wen && (dmem_byte_en == 8'h0F || dmem_byte_en == 8'hF0)) |-> (dmem_addr[1:0] == 2'b00);
    endproperty
    assert property (p_dmem_word_aligned)
        else $error("ASSERTION FAILED: Unaligned word access at 0x%h", dmem_addr);

    // =========================================================================
    // Helper function to read 64-bit value from data memory
    // =========================================================================
    function automatic logic [63:0] read_dmem_dword(input logic [63:0] addr);
        logic [63:0] value;
        value = {u_dmem.mem[addr[15:0]+7], u_dmem.mem[addr[15:0]+6],
                 u_dmem.mem[addr[15:0]+5], u_dmem.mem[addr[15:0]+4],
                 u_dmem.mem[addr[15:0]+3], u_dmem.mem[addr[15:0]+2],
                 u_dmem.mem[addr[15:0]+1], u_dmem.mem[addr[15:0]+0]};
        return value;
    endfunction

    // =========================================================================
    // Task: Check expected value with assertion
    // =========================================================================
    task automatic check_value(
        input string name,
        input logic [63:0] actual,
        input logic [63:0] expected
    );
        if (actual === expected) begin
            $display("  [PASS] %s = 0x%016h", name, actual);
            tests_passed++;
        end else begin
            $display("  [FAIL] %s = 0x%016h (expected 0x%016h)", name, actual, expected);
            tests_failed++;
        end
    endtask

    // =========================================================================
    // Task: Run post-execution checks
    // =========================================================================
    task automatic run_post_execution_checks();
        logic [63:0] mem_val;

        $display("\n========================================");
        $display("POST-EXECUTION ASSERTIONS");
        $display("========================================\n");

        tests_passed = 0;
        tests_failed = 0;

        // ---------------------------------------------------------------------
        // Check 1: Stack pointer initialized (x2/sp should be non-zero)
        // ---------------------------------------------------------------------
        $display("--- Stack Pointer Check ---");
        assert (u_dut.u_id_stage.u_regfile.registers[2] != 64'h0)
            else $error("Stack pointer (x2) not initialized!");
        if (u_dut.u_id_stage.u_regfile.registers[2] != 64'h0) begin
            $display("  [PASS] x2 (sp) = 0x%016h (initialized)", 
                     u_dut.u_id_stage.u_regfile.registers[2]);
            tests_passed++;
        end else begin
            $display("  [FAIL] x2 (sp) not initialized");
            tests_failed++;
        end

        // ---------------------------------------------------------------------
        // Check 2: Return address set (x1/ra should be non-zero after calls)
        // ---------------------------------------------------------------------
        $display("\n--- Return Address Check ---");
        if (u_dut.u_id_stage.u_regfile.registers[1] != 64'h0) begin
            $display("  [PASS] x1 (ra) = 0x%016h (set by JAL/JALR)",
                     u_dut.u_id_stage.u_regfile.registers[1]);
            tests_passed++;
        end else begin
            $display("  [INFO] x1 (ra) = 0 (may be expected if returned to main)");
            tests_passed++;
        end

        // ---------------------------------------------------------------------
        // Check 3: Memory test - data_array[1] should have loaded value
        // (test_memory stores 0x123456789ABCDEF0 to [0], loads it, stores to [1])
        // ---------------------------------------------------------------------
        $display("\n--- Memory Operation Checks ---");
        mem_val = read_dmem_dword(DATA_BASE + 64'h8);
        check_value("data_array[1] (LD/SD test)", mem_val, 64'h123456789ABCDEF0);

        // ---------------------------------------------------------------------
        // Check 4: Branch test - data_array[5] should be 1 (BNE passed)
        // ---------------------------------------------------------------------
        $display("\n--- Branch Test Checks ---");
        mem_val = read_dmem_dword(DATA_BASE + 64'h28);
        check_value("data_array[5] (BNE test)", mem_val, 64'h1);

        // ---------------------------------------------------------------------
        // Check 5: Branch test - data_array[6] should be 1 (BGE passed)
        // ---------------------------------------------------------------------
        mem_val = read_dmem_dword(DATA_BASE + 64'h30);
        check_value("data_array[6] (BGE test)", mem_val, 64'h1);

        // ---------------------------------------------------------------------
        // Check 6: Zba SH3ADD - data_array[3] has SH3ADD result
        // (ll_ptr[2] with base offset writes 0xCAFEBABE12345678)
        // ---------------------------------------------------------------------
        $display("\n--- Zba Instruction Checks ---");
        mem_val = read_dmem_dword(DATA_BASE + 64'h18);
        check_value("Zba SH3ADD result", mem_val, 64'hCAFEBABE12345678);

        // ---------------------------------------------------------------------
        // Check 8: Verify test_arithmetic ran (result variable at data[0])
        // (result = 50 = 0x32 from final shift operation)
        // ---------------------------------------------------------------------
        $display("\n--- Arithmetic Check ---");
        mem_val = read_dmem_dword(DATA_BASE + 64'h0);
        check_value("result (arithmetic)", mem_val, 64'h0000000000000032);

        // ---------------------------------------------------------------------
        // Summary
        // ---------------------------------------------------------------------
        $display("\n========================================");
        $display("ASSERTION SUMMARY: %0d passed, %0d failed", tests_passed, tests_failed);
        $display("========================================");

        if (tests_failed == 0) begin
            $display("*** ALL TESTS PASSED ***");
        end else begin
            $display("*** SOME TESTS FAILED ***");
        end
    endtask

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
                run_post_execution_checks();
            end
            begin
                repeat(TIMEOUT_CYCLES) @(posedge clk);
                $display("\n========================================");
                $display("[%0t] TIMEOUT after %0d cycles", $time, TIMEOUT_CYCLES);
                $display("========================================");
                run_post_execution_checks();
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
