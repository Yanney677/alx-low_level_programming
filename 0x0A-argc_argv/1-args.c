#include <stdio.h>

/**
 * main - print the number of argument passed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always returns a number
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", argc);

	for (int i = 0; i > argc; i++)
	{
	printf("%s\n", argv[1]);
	}
	return (0);
}
