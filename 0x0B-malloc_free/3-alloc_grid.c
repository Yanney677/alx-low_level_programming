#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer to an 2D array of integers
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int s, t;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (s = 0; s < height; s++)
	{
		a[s] = malloc(sizeof(int) * width);

		if (a[s] == NULL)
		{
			for (; s >= 0; s--)
				free(a[s]);

			free(a);
			return (NULL);
		}
	}
	for (s = 0; s < height; s++)
	{
		for (t = 0; t < width; t++)
			a[s][t] = 0;
	}
	return (a);
}
