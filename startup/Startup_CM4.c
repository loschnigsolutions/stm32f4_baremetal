
#include <stdint.h>
#include "vector_table.h"

extern uint32_t __la_data;
extern uint32_t __start_data;
extern uint32_t __end_data;
extern uint32_t __start_bss;
extern uint32_t __end_bss;
extern uint32_t __estack;

int main(void);

void Default_Handler(void)
{
	/* This is Default Exception handler */
	while(1);
}

void Reset_Handler(void)
{
	uint32_t size = (uint32_t) &__end_data - (uint32_t) &__start_data;
	uint32_t i;

	uint8_t *pSrc  = (uint8_t *) &__la_data;
	uint8_t *pDest = (uint8_t *) &__start_data;

	/* Copying Data Section from FLASH to RAM */

	for (i = 0;i < size; i++)
	{
		*pDest++ = *pSrc++;
	}

	size = &__end_bss - &__start_bss;

	/* Zero out BSS Section */

	pDest = (uint8_t *) &__start_bss;

	for (i = 0;i < size; i++)
	{
		*pDest = 0;
	}

	main();
}
