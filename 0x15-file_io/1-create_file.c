#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: pointer to a string to write to the file
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nlets;
	int rw;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nlets = 0; text_content[nlets]; nlets++)
		;

	rw = write(fd, text_content, nlets);

	if (rw == -1)
		return (-1);

	close(fd);

	return (1);
}
