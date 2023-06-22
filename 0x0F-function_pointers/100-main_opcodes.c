#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *ptArr = (char *) main;
	int j, mbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	mbytes = atoi(argv[1]);

	if (mbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (j = 0; j < mbytes; j++)
	{
		printf("%02x", ptArr[j] & 0xFF);
		if (j != mbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
