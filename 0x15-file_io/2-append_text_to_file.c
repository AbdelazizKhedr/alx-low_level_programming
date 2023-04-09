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
 *
 * Return: 1 on success file exist, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fild;
	int nlett;
	int rw;

	if (!filename)
		return (-1);

	fild = open(filename, O_WRONLY | O_APPEND);

	if (fild == -1)
		return (-1);

	if (text_content)
	{
		for (nlett = 0; text_content[nlett]; nlett++)
			;

		rw = write(fild, text_content, nlett);

		if (rw == -1)
			return (-1);
	}

	close(fild);

	return (1);
}
