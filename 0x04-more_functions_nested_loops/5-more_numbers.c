#include "main.h"

/**
 * more_numbers - print from 0 to 14 in one line x10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	char x, y, xx, yy;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			xx = y / 10;
			yy = y % 10;

			if (y >= 10)
				_putchar(xx + '0');
			_putchar(yy + '0');
		}
		_putchar('\n');
	}
}
