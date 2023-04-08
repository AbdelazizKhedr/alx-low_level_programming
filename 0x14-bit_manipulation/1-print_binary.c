#include "main.h"
/**
 * print_binary - print the binary repres of a given number
 * @n: integer to be converted
 */

void print_binary(unsigned long int n)
{
	unsigned int bit;
	char f = 1;

	for (bit = sizeof(n) * 8; bit > 0; bit--)
	{
		char bit2 = (n >> (bit - 1)) & 0x01;

		if (bit2 || (!bit2 && !f) || !n)
		{
			f = 0;
			_putchar(bit2 + '0');
		}
		if (!n)
			break;
	}
}
