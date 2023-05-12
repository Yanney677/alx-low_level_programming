#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - read the textfile and print it to the stdout
 * @filename: the textfile to be read
 * @letters: the number of characters to be read and printed in bytes
 * Return: the actual number of characters to be read and printed in bytes
 * 0 when the function fails or otherwise filename is NULLL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == 0)
	{
		close(fd);
		return (0);
	}
	r = read(fd, buf, letters);
	close(fd);
	if (r == -1)
	{
		free(buf);
		return (0);
	}
	w = write(STDOUT_FILENO, buf, r);
	free(buf);
	if (r != w)
		return (0);
	return (w);
}
