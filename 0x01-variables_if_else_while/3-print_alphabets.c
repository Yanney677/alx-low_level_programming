#include <stdio.h>

/**
 * main - print the alphabet in lowercase and uppercase
 *
 * Return: always turns 0 (Sucess)
 */

int main(void)
{
	int x = 97;
	int y = 65;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	while (y <= 90)
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}

