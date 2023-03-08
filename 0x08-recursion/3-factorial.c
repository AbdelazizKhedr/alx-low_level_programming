#include "main.h"

/**
 * factorial - calculates the factorial of a number.
 * @n: given number.
 * Return: factorial of the number or -1 as error
 **/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
