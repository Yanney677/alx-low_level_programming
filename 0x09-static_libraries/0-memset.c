#include "main.h"
/**
 * _memset - fill a block of memory with a constant byte
 * @s: a pointer to the memory area
 * @b: the desired constant byte
 * @n: number of bytes to be filled
 *
 * Return: return the pointer to the n bytes dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;


	for (j = 0; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}

