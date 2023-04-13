#include "stdlib.h"
#include "main.h"

/**
 * alloc_grid - to create a 2 dimensional array of a grid
 * @width: array of width
 * @height: array of height
 *
 * Return: a pointer to a new grid
 */
int **alloc_grid(int width, int height)
{
	int **make_grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	make_grid = (int **)malloc(sizeof(int *) * height);

	if (make_grid == NULL)
		return (NULL);

	for  (i = 0; i < height; i++)
	{
		make_grid[i] = (int *)malloc(sizeof(int) * width);

		if (make_grid[i] == NULL)
		{
			for (i = 0; i >= 0; i++)
				free(make_grid[i]);

			free(make_grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				make_grid[i][j] = 0;
		}
		return (make_grid);
}
