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
	int answer;

	if (argc == 3)
	{
		prinft("Error\n");
		return (1);
	}
	else
	{
		answer = (atoi(argv[1])) * (atoi(argv[2]));
		Printf("%d\n", answer);
	}
	return (0);
}
