#include <stdio.h>

/**
 * main - prints the alphabets in lowercase except q and e
 *
 * Return: always turns 0 (Excellent)
 */

int main(void)
{
	int q = 97;

	while (q <= 122)
	{
	if (q == 101 || q == 113)
	{
		q++;
		continue;
	}
		putchar(q);
		q++;
	}
	putchar('\n');
	return (0);
}

