#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the named file
 * @text_content: is the string to add at the end of the file
 * Return: 1 on sucess, -1 on error or otherwise filename is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, r, chlen = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[chlen];)
			chlen++;
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	r = write(chlen, fp, text_content);

	if (fp < 0 || r < 0)
		return (-1);

	close(fp);

	return (1);
}
