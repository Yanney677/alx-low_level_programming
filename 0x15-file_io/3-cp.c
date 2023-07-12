#include "main.h"
#include <stdio.h>

/**
 * err_file - checks for errors in the opened file on
 * the stdout.
 * @file_from: file from the stdout
 * @file_to: file to the stdin
 * @argv: argument vector
 * Return: void.
 */
void err_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: arguments count
 * @argv: arguments vector
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t ncha, nw;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_file(file_from, file_to, argv);

	ncha = 1024;
	while (ncha == 1024)
	{
		ncha = read(file_from, buff, 1024);
		if (ncha == -1)
			err_file(-1, 0, argv);
		nw = write(file_to, buff, ncha);
		if (nw == -1)
			err_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
