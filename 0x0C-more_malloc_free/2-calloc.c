#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory with 0
 * @m: memory location to be filled with
 * @a: character to copy
 * @n: number of times to copy a
 *
 * Return: pointer to memory location m
 */
char *_memset(char *m, char a, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		m[j] = a;
	}
	return (m);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of elements in bytes
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int l = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	s = malloc(l);

	if (s == NULL)
		return (NULL);

	_memset(s, 0, l);
	return (s);
}
