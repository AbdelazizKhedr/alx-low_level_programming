#include "main.h"
/**
 * _islower - checks if @c is lowercase character.
 *
 * @c: is the character to check
 *
 * Return: 1 if c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
