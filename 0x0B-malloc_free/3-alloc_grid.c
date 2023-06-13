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
	int **grid_ptr;
	int s, t;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid_ptr = malloc(height * sizeof(int *));
	if (grid_ptr == NULL)
	{
		free(grid_ptr);
		return (NULL);
	}

	for (s = 0; s < height; s++)
	{
		grid_ptr[s] = malloc(width * sizeof(int));
		if (grid_ptr[s] == NULL)
		{
			for (s--; s >= 0; s--)
				free(grid_ptr[s]);
			free(grid_ptr);
			return (NULL);
		}
	}
		for (t = 0; t < width; t++)
			grid_ptr[s][t] = 0;
	return (grid_ptr);
}
