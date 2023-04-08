#include "main.h"
/**
 * get_bit - a function that returns value of a bit at any given index
 * @n: input a long integer
 * @index: index to start from
 * Return: value of the bit at the specified index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
