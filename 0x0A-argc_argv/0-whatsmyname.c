#include <stdio.h>

/**
 * main - print the name of the file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always returns 0 for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
