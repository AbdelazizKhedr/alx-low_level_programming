#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * append_text_to_file - Appends text in the end of file
 * @filename: Name of the file to be appended
 * @text_content: terminated string to write in file
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fild, resW, len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		fild = open(filename, O_WRONLY | O_APPEND);
		if (fild == -1)
			return (-1);
		len = 0;
		while (*(text_content + len) != '\0')
			len++;
		resW = write(fd, text_content, len);
		if (resW == -1)
		{
			close(fild);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(fild);
	return (1);
}
