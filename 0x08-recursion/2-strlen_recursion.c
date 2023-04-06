#include "main.h"

/**
 * _strlen_recursion - the function print length of string
 *
 * @s: string pointer
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int y = 0;

	if (*s)
	{
		y = _strlen_recursion(s + 1);
		return (y += 1);
	}
	return (0);
}
