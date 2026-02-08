    .section .text.init
    .global _start
    .type _start, @function

_start:
    # Initialize stack pointer
    la sp, _stack_top

    # Clear BSS section
    la t0, _bss_start
    la t1, _bss_end
clear_bss:
    bge t0, t1, bss_done
    sd zero, 0(t0)
    addi t0, t0, 8
    j clear_bss
bss_done:

    # Call main
    call main

    # If main returns, loop forever
loop:
    j loop

    .size _start, . - _start
