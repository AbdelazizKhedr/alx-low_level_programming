#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - Read a text file and prints it to the POSIX
 * standard output.
 * @filename: the text file.
 * @letters: Number of letters to read and print.
 * Return: the actual number of letter read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fild, resR, resW;
	char *len;

	if (filename == NULL)
		return (0);
	fild = open(filename, O_RDONLY);
	if (fild == -1)
		return (0);
	len = malloc(sizeof(char) * letters);
	if (len == NULL)
		return (0);
	resR = read(fild, len, letters);
	if (resR == -1)
	{
		free(len);
		return (0);
	}
	resW = write(STDOUT_FILENO, len, resR);
	if (resW == -1 || resW != resW)
	{
		free(len);
		return (0);
	}
	free(len);
	close(fild);
	return (resW);
}
