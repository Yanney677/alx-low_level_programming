#include "main.h"
/**
 * _puts_recursion - a function that print a string, followed by a new line;
 * @s: string
 * Return: return void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}

