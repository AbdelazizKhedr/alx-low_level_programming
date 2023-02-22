#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lower case for 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char x;

		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);

		_putchar('\n');
	}
}
