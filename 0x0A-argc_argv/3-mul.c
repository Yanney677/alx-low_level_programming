#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Error, if the two arguments are not received, otherwise 1
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		i = (atoi(argv[1]));
		j = (atoi(argv[2]));
		printf("%d\n", i * j);
		return (0);

	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
