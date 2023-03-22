#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets 10 times in lowercase
 *
 * Return: always turns 0 on the screen
 */

void print_alphabet_x10(void)

{
	char k;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (k = 'a'; k <= 'z'; k++)
			_putchar(k);
	_putchar('\n');
	}
}
