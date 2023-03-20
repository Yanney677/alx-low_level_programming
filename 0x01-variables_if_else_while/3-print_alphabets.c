#include <stdio.h>

/**
 * main - print the alphabet in lowercase and uppercase
 *
 * Return: always turns 0 (Sucess)
 */

int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (n <= 98)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}

