#include "main.h"

/**
 * read_textfile- read text file and print to STDOUT.
 * @filename: filename
 * @letters: number of letters to print
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t nw, nt;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	nt = read(fd, buf, letters);
	nw = write(STDOUT_FILENO, buf, nt);

	free(buf);
	close(fd);
	return (nw);
}
