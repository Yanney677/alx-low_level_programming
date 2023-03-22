#include "main.h"

/**
 * main - print the alphabets 10 times
 *
 * Return: always turns 0 on the screen
 */


void print_alphabet_x10(void);

{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}	
	}
	_putchar('\n');
	i++;
}
