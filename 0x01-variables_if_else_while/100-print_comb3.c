#include <stdio.h>

/**
 * main - prints all possible different combination of two digits
 *
 * Return: always turns 0 on the screen (Excellent)
 */

int main(void)
{
	int v;
	int w;

	for (v = 48; v <= 56; v++)
	{
	for (w = 49; w <= 57; w++)
	{
		if (v > w)
	{
		putchar(v);
		putchar(w);
		if (v != 56 || w != 57)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
