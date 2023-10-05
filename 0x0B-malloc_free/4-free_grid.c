#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *free_grid - function that frees a 2 dim grid
 *
 * @grid: a grid wit 2 dim
 * @height: height of grid
 *
 * Return : no return
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
