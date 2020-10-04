
MEMORY
{
	FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 0x200000
	SRAM (rwx) : ORIGIN = 0x20000000, LENGTH = 0x18000
};

ENTRY(Reset_Handler)

SECTIONS
{
	.text :
	{
		*(.isr_vectors)
		*(.text)
		*(.rodata)
		. = ALIGN(4);
		__end_text = .;
	} > FLASH

	__la_data = LOADADDR(.data);
	.data :
	{
		__start_data = .;
		*(.data)
		. = ALIGN(4);
		__end_data = .;

	} > SRAM AT > FLASH

	.bss :
	{
		__start_bss = .;
		*(.bss)
		*(COMMON)
		. = ALIGN(4);
		__end_bss = .;
	} > SRAM

}
