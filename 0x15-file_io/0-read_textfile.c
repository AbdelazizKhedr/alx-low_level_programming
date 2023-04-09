#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Read a text file and prints it
 * to the POSIX standard output.
 * @filename: the text file.
 * @letters: Number of letters to read and print.
 *
 * Return: the actual number of letter read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fild;
	ssize_t nr, nw;
	char *len;

	if (!filename)
		return (0);

	fild = open(filename, O_RDONLY);

	if (fild == -1)
		return (0);

	len = malloc(sizeof(char) * (letters));
	if (!len)
		return (0);

	nr = read(fild, len, letters);
	nw = write(STDOUT_FILENO, len, nr);

	close(fild);

	free(len);

	return (nw);
}
