OUTPUT_ARCH(riscv)
ENTRY(_start)

MEMORY
{
    IMEM (rx)  : ORIGIN = 0x00000000, LENGTH = 16K
    DMEM (rwx) : ORIGIN = 0x00001000, LENGTH = 16K
}

SECTIONS
{
    . = 0x00000000;

    .text : {
        *(.text.init)
        *(.text)
        *(.text.*)
    } > IMEM

    . = 0x00001000;

    .data : {
        _data_start = .;
        *(.data)
        *(.data.*)
        *(.rodata)
        *(.rodata.*)
        _data_end = .;
    } > DMEM

    .bss : {
        _bss_start = .;
        *(.bss)
        *(.bss.*)
        *(COMMON)
        _bss_end = .;
    } > DMEM

    . = ALIGN(16);
    . = . + 0x1000;  /* 4KB stack */
    _stack_top = .;
}
