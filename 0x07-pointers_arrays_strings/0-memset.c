
#include "main.h"

/**
 * _memset - Entry point
 *
 * @s: point to the address destination
 *
 * @b: the consatnt type
 *
 * @n: the number of byte
 *
 * Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

