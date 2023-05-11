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
	ssize_t fp;
	ssize_t m;
	ssize_t s;
	char *buffer;

	fp = open(filename, O_RDONLY);
	if (fp == 0)
		return (0);
	buffer = malloc(letters * sizeof(char));
	s = read(fp, buffer, letters);
	m = write(STDOUT_FILENO, buffer, s);

	free(buffer);
	close(fp);
	return (m);
}
