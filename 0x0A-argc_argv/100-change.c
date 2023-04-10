#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Error if the argument passed is not exactly 1, otherwise 0
 */
int main(int argc, char *argv[])
{

	int i, j, x, change = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x < 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5 && x; i++)
		{
			j = x / coins[i];
			change += j;
			x -= j * coins[i];
		}
		printf("%d\n", change);
	}
	return (0);
}
