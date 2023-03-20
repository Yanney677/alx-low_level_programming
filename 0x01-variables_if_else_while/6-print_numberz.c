#include <stdio.h>

/**
 * main - prints alll single digit number of base 10 starting from 0
 *
 * Return: always turns 0 (Excellent)
 */

int main(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
	putchar(j + 48);
	}
	putchar('\n');
	return (0);
}

