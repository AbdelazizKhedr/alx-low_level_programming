#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i;
	char *x;

	i = 1;
	x = (char *)&i;
	return ((int)x[0]);
}
