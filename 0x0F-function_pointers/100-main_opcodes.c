#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its ownself
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: always returns 0
 */
int main(int argc, char *argv[])
{
	int bytes, index;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (index = 0; index < bytes; index++)
	{
		if (index == bytes - 1)
		{
			printf("%02hhx\n", arr[index]);
			break;
		}
		printf("%02hhx ", arr[index]);
	}
	return (0);
}

