#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: varaible pointer to the filename
 * @text_content: added content of the file
 * Return: 1 if the file exists else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
