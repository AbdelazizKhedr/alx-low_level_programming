#include "main.h"
/**
 * flip_bits - return the numbers of bits you need to flip
 * to move from a number to another
 * @n: base given number
 * @m: number to be transformed to
 * Return: numbers of bit transformations
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, result;

	result = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			result++;
	return (result);
}
