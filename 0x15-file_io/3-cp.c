#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocate 1024 bytes for a buffer.
 * @file: name of the file the buffer is storing the character for.
 *
 * Return: a pointer to the newly-allocated destination on the buffer.
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == 0)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - closes file descriptors.
 * @fd: file descriptor to be closed.
 */
void close_file(int fd)
{
	int m;

	m = close(fd);

	if (m < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another file
 * @argc: arguments counts
 * @argv: arguments vector
 *
 * Return: 0 on a successful count
 *
 * Description: if the argument count is incorrect - exit with code 97.
 * if file_from does not exist or cannot be read it  - exit with code 98.
 * if file_to cannot be created or written to - exit with code 99.
 * if file_to or file_from cannot close a file descriptor - exit with code 100.
 */
int main(int argc, char *argv[])
{
	int frm, t, s, m;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	frm = open(argv[1], O_RDONLY);
	s = read(frm, buf, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm < 0 || s < 0)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		m = write(t, buf, s);
		if (t < 0 || m < 0)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		s = read(frm, buf, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (s > 0);

	free(buf);
	close_file(frm);
	close_file(t);

	return (0);
}

