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
	int *s, j = 0;

	if (min > max)
		return (NULL);

	s = malloc(sizeof(int) * (max - min) * sizeof(int));

	if (s == NULL)
		return (NULL);

	while (min <= max)
	{
		s[j] = min;
		j++;
		min++;
	}
	return (s);
}
