#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 *
 * Return: a pointer to the allocated memory
 * if malloc fails, status value is equal to 98
 */
void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
