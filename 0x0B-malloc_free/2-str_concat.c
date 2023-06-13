#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: concatenate of the string (s1 and s2)
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int m, n, o, lim;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (m = 0; s1[m] != '\0'; m++)
		;

	for (n = 0; s2[n] != '\0'; n++)
		;

	ptr = malloc(sizeof(char) * (m + n + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (o = 0; o < m; o++)
		ptr[o] = s1[o];

	lim = n;
	for (n = 0; n <= lim; o++, n++)
		ptr[o] = s2[n];

	return (ptr);
}
