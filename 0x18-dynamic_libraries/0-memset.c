
#include "main.h"

/**
 * _memset - Entry point
 * @s: point to the address destination
 * @b: the consatnt type
 * @n: the number of byte
 *
 * Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}

