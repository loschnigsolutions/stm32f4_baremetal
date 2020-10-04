

#include <stdint.h>


int main(void)
{
	volatile int *clk   =  (int *) 0x40023830;
	volatile int *gpio  =  (int *) 0x40020000; 

	*clk |= (1 << 0);

	*gpio |= (1 << 10);

	gpio = 0x40020014;

	*gpio |= (1 << 5);

	while (1);
}
