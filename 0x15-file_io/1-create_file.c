#include "main.h"

/**
 * create_file - it creates a file.
 * @filename: Apointer to the name of the file to create
 * @text_context: A pointer to a string to write to the file
 *
 * Return: if the function fails --1
 * otherwise 1.
 */
int create_file(const char *filename, char *text_context)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_context != NULL)
	{
		for (len = 0; text_context[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_context, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
