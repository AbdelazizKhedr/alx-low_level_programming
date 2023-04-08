#include "main.h"
/**
 * print_binary - print the binary repres of a given number
 * @n: integer to be converted
 */

void print_binary(unsigned long int n)
{
	int i, zx;

	if (n == 0)
		_putchar('0');
	for (zx = 0, i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			zx = 1;
		if (zx == 1)
			((n >> i) & 1) ? _putchar('1') : _putchar('0');
	}
}
