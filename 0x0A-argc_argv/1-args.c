#include <stdio.h>

/**
 * main - prints the number of arguenments passed to it
 * @argc: arguemnet count
 * @argv: array of pointer to arguement strings
 * Return: 0 on success
 **/
int main(int argc, char *argv[])
{
/* to suppress unused var */
	argv = argv;
	printf("%d\n", argc - 1);
	return (0);
}
