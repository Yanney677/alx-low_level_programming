#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: always turns 0 on the screen(Excellent)
 */

int main(void)
{
	int s;
	int a;

	for (s = 48; s <= 57; s++)
	{
	putchar(s);
	}
	for (a = 97; a <= 102; a++)
	{
	putchar(a);
	}
	putchar('\n');
	return (0);
}
