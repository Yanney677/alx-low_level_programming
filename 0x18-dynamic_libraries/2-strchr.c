#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be search
 * @c: target char
 * Return: pointer to first occurence of c
 */

char *_strchr(char *s, char c)
{
	int n = 0;

	for (; s[n] >= '\0'; n++)
	{
		if (s[n] == c)
			return (&s[n]);
	}
	return (0);
}

