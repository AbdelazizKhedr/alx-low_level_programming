#include <stdio.h>

/**
 * main - print the first 50 fibonacci number
 * Return: void
 */
int main(void)
{
	unsigned long sum = 0;
	unsigned long a = 0, b = 1, fib = 0;

	while (fib < 4000000)
	{
		fib = a + b;
		a = b, b = fib;
		if (fib % 2 == 0)
			sum += fib;
	}

	printf("%lu\n", sum);
	return (0);
}
