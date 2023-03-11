#include "main.h"

/**
 * _strncat - concatenates strings @dest and @src to @dest with @n bytes limit
 * @dest: the string to append @src to
 * @src: the string to be appended to @dest
 * @n: number of bytes to be copied from @src to @dest
 * Return: pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	for (; *dest; dest++)
		{}

	for (; *src && n > 0; src++, dest++, n--)
		*dest = *src;

	*dest = 0;
	return (p);
}
