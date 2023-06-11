#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to the first occurrence of the char c
 */

char *_strchr(char *s, char c)
{
		int j = 0;

		for (; s[j] >= '\0'; j++)
		{
			if (s[j] == c)
				return (&s[j]);
		}
		return (0);
}
