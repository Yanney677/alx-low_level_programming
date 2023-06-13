#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: void
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int m, n;

	if (str == NULL)
		return (NULL);

	for (m = 0; str[m] != '\0'; m++)
		;

	ptr = (char *)malloc(sizeof(char) * (m + 1));

	if (ptr == NULL)
		return (NULL);

	for (n = 0; n <= m; n++)
		ptr[n] = str[n];

	return (ptr);
}
