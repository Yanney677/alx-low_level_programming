#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 *
 * Return: always returns 0 on screen
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
