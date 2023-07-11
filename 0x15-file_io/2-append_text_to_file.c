#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: filename
 * @text_content: added content at the end of the file
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nlets = 0, rw;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[nlets]; nlets++)

		rw = write(fd, text_content, nlets);

		if (rw == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
