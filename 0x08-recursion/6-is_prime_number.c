#include "main.h"

/**
 * sqRec - calculates square root recursively
 * @n: given number
 * @m: comparison number
 * Return: 1 if not found sqr root, else sqr root
 **/
int sqRec(int n, int m)
{
	if (n <= 0)
		return (-1);
	if (n * n == m)
		return (n);
	return (sqRec(n - 1, m));
}
/**
 * sqReccc - finds the natural square root of a number
 * @n: given number
 * Return: square root of n or -1 if no no natural square root
 **/
int sqReccc(int n)
{
	if (n == 1)
		return (1);
	return (sqRec(n / 2, n));
}
/**
 * is_prime_number - checks if a given number is prime
 * @n: given number
 * Return: 1 if number is prime, otherwise return 0
 **/
int is_prime_number(int n)
{
	if (n <= 1 || sqReccc(n) >= 1)
		return (0);
	if (sqReccc(n) == -1)
		return (1);
	return (sqReccc(n));
}
