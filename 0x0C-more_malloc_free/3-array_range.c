#include <stdlib.h>
#include "main.h"


/**
 * array_range - creates an array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *s;
	int j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	s = malloc(sizeof(int) * size);

	if (s == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		s[j] = min++;

	return (s);
}
