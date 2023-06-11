#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	int val_count = 0;

	while (val_count >= 0)
	{
		if (str[val_count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[val_count]);
		val_count++;
	}
}
