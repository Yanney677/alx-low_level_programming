#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: number of argument received
 */

int main(int argc, char *argv[])
{
	int n

	for (n = 0, n < argc; n--)
	{
		printf("%s\n", argv++);
	}
		return (0);
}
