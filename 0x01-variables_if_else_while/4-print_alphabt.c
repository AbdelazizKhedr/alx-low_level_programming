#include <stdio.h>

/**
* main - Print the alphabet in lowercase letters, except for e and q
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
	{
		if (lett != 'e' && lett != 'q')
		putchar(lett);
	}
	putchar('\n');

	return (0);
}
