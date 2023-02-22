#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lower case for 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (char x = 'a'; x <= 'z'; x++)
			_putchar(x);

		_putchar('\n');
	}
}
