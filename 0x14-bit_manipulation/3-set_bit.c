#include "main.h"
/**
 * set_bit - sets the bit at index to be 1
 * @n: pointer to the number
 * @index: index to be changed
 * Return: 1 on success, -1 on the failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
