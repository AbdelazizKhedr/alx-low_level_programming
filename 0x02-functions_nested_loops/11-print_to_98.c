#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print from @n to 98
 * @n: the number to start printing from
 * Return: void
 */
void print_to_98(int n)
{
	int reg, i;

	reg = n < 98 ? 1 : -1;
	i = n;
	while (1)
	{
		printf("%d", i);
		if (i != 98)
			printf(", ");
		else
		{
			printf("\n");
			break;
		}

		i += reg;
	}
}
