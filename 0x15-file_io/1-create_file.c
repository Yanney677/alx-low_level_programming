#include "main.h"
/**
 * create_file - creates a file which contains and added permissions to it
 * @filename: the name of the file to be created
 * @text_content: content to be added to the created file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fld, chlen = 0, n;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[chlen];)
			chlen++;
	}
	fld = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(fld, text_content, chlen);

	if (fld < 0 || n < 0)
		return (-1);

	close(fld);

	return (1);
}
