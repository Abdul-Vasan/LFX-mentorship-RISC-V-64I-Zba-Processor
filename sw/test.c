/*
 * RISC-V 64I-Zba Processor Test Program
 *
 * This program demonstrates:
 * 1. Basic arithmetic operations (ADD, SUB, AND, OR, XOR, shifts)
 * 2. Memory access (LD, SD, LW, SW, LH, SH, LB, SB)
 * 3. Branching logic (BEQ, BNE, BLT, BGE, loops)
 * 4. Zba extension instructions (SH1ADD, SH2ADD, SH3ADD, ADD.UW)
 */

// Data section - will be placed at address 0x1000
volatile long long data_array[8] __attribute__((section(".data")));
volatile int int_array[8] __attribute__((section(".data")));
volatile short short_array[8] __attribute__((section(".data")));

// Result storage
volatile long long result __attribute__((section(".data")));

void test_arithmetic(void) {
    long long a = 100;
    long long b = 50;
    long long c;

    // ADD
    c = a + b;  // c = 150

    // SUB
    c = a - b;  // c = 50

    // AND
    c = a & b;  // c = 32

    // OR
    c = a | b;  // c = 118

    // XOR
    c = a ^ b;  // c = 86

    // Shifts
    c = a << 2;  // c = 400
    c = a >> 1;  // c = 50

    result = c;
}

void test_memory(void) {
    // Store doubleword
    data_array[0] = 0x123456789ABCDEF0LL;

    // Load doubleword
    long long val = data_array[0];

    // Store word
    int_array[0] = 0x12345678;

    // Load word (sign-extended)
    int ival = int_array[0];

    // Store halfword
    short_array[0] = 0x1234;

    // Load halfword
    short sval = short_array[0];

    // Store results
    data_array[1] = val;
    data_array[2] = (long long)ival;
    data_array[3] = (long long)sval;
}

void test_branches(void) {
    int i;
    long long sum = 0;

    // Loop with BLT
    for (i = 0; i < 10; i++) {
        sum += i;
    }

    // BEQ test
    if (sum == 45) {
        data_array[4] = 1;  // Pass
    } else {
        data_array[4] = 0;  // Fail
    }

    // BNE test
    if (sum != 0) {
        data_array[5] = 1;  // Pass
    } else {
        data_array[5] = 0;  // Fail
    }

    // BGE test
    if (sum >= 45) {
        data_array[6] = 1;  // Pass
    } else {
        data_array[6] = 0;  // Fail
    }
}

void test_zba(void) {
    long long base_addr = (long long)data_array;
    unsigned int index = 2;
    long long val;

    /*
     * SH1ADD: rd = rs2 + (rs1 << 1)
     * Used for accessing 16-bit (short) arrays: addr = base + index*2
     * The compiler will generate: sh1add rd, index, base
     */
    volatile short *short_ptr = (volatile short *)base_addr;
    short_ptr[index] = 0x5678;  // Uses SH1ADD for address calculation

    /*
     * SH2ADD: rd = rs2 + (rs1 << 2)
     * Used for accessing 32-bit (int) arrays: addr = base + index*4
     * The compiler will generate: sh2add rd, index, base
     */
    volatile int *int_ptr = (volatile int *)base_addr;
    int_ptr[index] = 0xDEADBEEF;  // Uses SH2ADD for address calculation

    /*
     * SH3ADD: rd = rs2 + (rs1 << 3)
     * Used for accessing 64-bit (long long) arrays: addr = base + index*8
     * The compiler will generate: sh3add rd, index, base
     */
    volatile long long *ll_ptr = (volatile long long *)base_addr;
    ll_ptr[index] = 0xCAFEBABE12345678LL;  // Uses SH3ADD for address calculation

    /*
     * ADD.UW: rd = rs2 + zext(rs1[31:0])
     * Used when adding a 32-bit unsigned value to a 64-bit address
     */
    unsigned int offset = 8;
    val = *(volatile long long *)(base_addr + offset);  // May use ADD.UW

    // Store test result
    data_array[7] = val;
}

int main(void) {
    // Run all tests
    test_arithmetic();
    test_memory();
    test_branches();
    test_zba();

    // Signal completion (ECALL)
    asm volatile ("ecall");

    return 0;
}
