#include "main.h"

/**
 * print_int - prints 2 digits number as ascii string
 * @n: the number to print
 * Return: void
 */
void print_int(int n)
{
	int a, b;

	a = n / 10;
	b = n % 10;

	_putchar(a + 48);
	_putchar(b + 48);
}

/**
 * jack_bauer - print every minutes of the day
 * Return: void
 */
void jack_bauer(void)
{
	for (int i = 0; i < 1440; i++)
	{
		int x, y;

		x = i / 60;
		y = i % 60;

		print_int(x);
		_putchar(':');
		print_int(y);
		_putchar('\n');
	}
}
