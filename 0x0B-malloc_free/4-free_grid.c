#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2D array of grid
 * @height: height of grid
 * Return: void
 *
 */
void free_grid(int **grid, int height)
{
	int grid_f;

	for (grid_f = 0; grid_f < height; grid_f++)
	{
		free(grid[grid_f]);
	}
	free(grid);
}


