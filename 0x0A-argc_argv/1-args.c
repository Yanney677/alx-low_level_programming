#include <stdio.h>

/**
 * main - print the number of argument passed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always returns a number
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
