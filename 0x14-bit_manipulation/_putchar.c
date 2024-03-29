#include <unistd.h>

/**
 * _putchar - writes the char @c to stdout
 * @c: the characters to be printed
 *
 * Return: 1 on success ,  -1 on errors.
 */

int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
