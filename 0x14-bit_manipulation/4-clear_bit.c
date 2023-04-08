#include "main.h"
/**
 * clear_bit - sets the value of a bit to be 0 at the given index
 * @n: pointer to a number
 * @index: index to be change
 * Return: 1 if worked success or -1 if an error failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
