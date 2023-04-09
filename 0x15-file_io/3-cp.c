#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * Errors - Reads the file & check errors.
 * @err: The Error number identifier
 * @filename: File name
 */
void Errors(int err, char *filename)
{
	if (err == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (err == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
/**
 * cop_func - function to copy the content of
 *  a file to another new file.
 * @file_source: the name of source file.
 * @file_destnation: the name of destination file.
 * Return: 1 on success, -1 on error and failure.
 */
void cop_func(char *file_source, char *file_destnation)
{
	int fildR, fildW, resR, resW;
	char *buffer[1024];

	fildR = open(file_source, O_RDONLY);
	if (fildR < 0)
		Errors(98, file_source);

	fildW = open(file_destnation, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fildW < 0)
	{
		close(fildR);
		Errors(99, file_destnation);
	}
	do {
		resR = read(fildR, buffer, 1024);
		if (resR < 0)
			Errors(98, file_source);

		resW = write(fildW, buffer, resR);
		if (resW < resR)
			Errors(99, file_destnation);
	}	while (resW == 1024);
	if (close(fildR) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fildR);
		close(fildW);
		exit(100);
	}
	if (close(fildW) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fildW);
		exit(100);
	}
}
/**
 * main - Copy the content of a file into another file.
 * @argc: argument counters
 * @av: argument valuees
 * Return: 0 on succes, -1 on error.
 */
int main(int argc, char *av[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cop_func(av[1], av[2]);
	return (0);
}
