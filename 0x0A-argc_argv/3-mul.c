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
	int i, j, z;

	if (argc == 3)
	{
		prinft("Error\n");
		return (1);
	}
	else
	{
		i = (atoi(argv[1]));
		j = (atoi(argv[2]));
		z = i * j;
		printf("%d\n", z);
	}
	return (0);
}
