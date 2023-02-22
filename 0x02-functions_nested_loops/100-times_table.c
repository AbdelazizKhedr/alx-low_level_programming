#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the times table.
 * @n: must be in range 0 to 15
 * Return: void
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;
	int i;

	for (i = 0; i <= n; i++)
	{
		int j;

		for (j = 0; j <= n; j++)
		{
			int z = i * j;

			if (j == 0)
				printf("0");
			else
				printf("%4d", z);

			if (j < n)
				printf(",");
		}
		printf("\n");
	}

}
