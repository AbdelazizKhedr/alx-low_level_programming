#include "main.h"
/**
 * _stoin - converts characters to integers
 * @c: char to be converted
 * Return: converted integer
 */

unsigned int _stoin(char c)
{
	return ((unsigned int) c - '0');
}

/**
 * _strlenh - calculate the length of the strings
 * @s: input string
 * Return: length of the string
 */

unsigned int _strlenh(const char *s)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * binary_to_uint - convert a string of 1s and 0's to decimal numbers
 * @b: string to be converted
 * Return: unsigned decimal numbers we want
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result, temp, exponn;

	if (!b)
		return (0);
	result = temp = 0;
	exponn = 1;
	for (i = _strlenh(b) - 1; b[i]; i--, exponn *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		temp = _stoin(b[i]);
		result += temp * exponn;
	}
	return (result);
}
