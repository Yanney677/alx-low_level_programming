#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0 on sucess, otherwise 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, i, res;
	int ncoins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	res = 0;

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && cents >= 0; i++)
	{
		while (cents >= ncoins[i])
		{
			res++;
			cents -= ncoins[i];
		}
	}

	printf("%d\n", res);
	return (0);
}

