#include <stdio.h>

/**
 * main - prints the lowercase alphabets in reverse
 *
 * Return: always turns 0 on screen(Excellent)
 */

int main(void)
{
	int w = 122;

	while (w >= 97)
	{
		putchar(w);
		w--;
	}
	putchar('\n');
	return (0);
}

