#include "main.h"

/**
 * print_diagonal - print diagonal line of length n lines
 *
 * @n: the number of lines that contains the diagonal
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
