#include <stdio.h>

/**
 * main - prints all possible combinations of single-digits numbers
 *
 * Return: always turns 0 on the screen (Excellent)
 */

int main(void)
{
	int e;

	for (e = 48; e <= 57; e++)
	{
	putchar(e);
	if (e == 57)
	{
	continue;
	}
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}

