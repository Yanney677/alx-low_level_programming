#include "main.h"

int verify(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - detects if a string is a palindrome
 * @s: string in reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (verify(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * verify - checks the string recursively for palindrome
 * @s: string to check
 * @i: iterating
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int verify(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (verify(s, i + 1, len - 1));
}

