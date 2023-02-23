#include "main.h"

/**
 * print_line - print line of length n
 *
 * @n: the length of the line
 *
 * Return: void
 */
void print_line(int n)
{
	int x;

	if (n < 0)
		n = 0;

	for (x = 0; x < n; x++)
		_putchar('_');

	_putchar('\n');
}
