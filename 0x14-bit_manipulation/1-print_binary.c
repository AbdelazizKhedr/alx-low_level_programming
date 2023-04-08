#include "main.h"

/**
 * print_binary - print number in base2
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
	unsigned int bit;
	char fst = 1;

	for (bit = sizeof(n) * 8; bit > 0; bit--)
	{
		char bit2 = (n >> (bit - 1)) & 0x01;

		if (bit2 || (!bit2 && !fst) || !n)
		{
			fst = 0;
			_putchar(bit2 + '0');
		}
		if (!n)
			break;
	}
}
