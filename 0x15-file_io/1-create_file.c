#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file - Creates a file.
 * st output.
 * @filename: Name of the file to be created.
 * @text_content: terminated string to write in file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fild, len;
	ssize_t resW;

	if (filename == NULL)
		return (-1);
	fild = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fild == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = 0;
		while (*(text_content + len) != '\0')
			len++;
		resW = write(fild, text_content, len);
		if (resW == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(fild);
	return (1);
}
