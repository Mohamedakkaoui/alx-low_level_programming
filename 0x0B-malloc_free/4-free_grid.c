#include "main.h"
#include <stdlib.h>

/*
 * free_grid - function that frees a 2 dim grid
 *
 * @grid : a matrix
 * @heigt : height of grid
 *
 * Return : Always 0.
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (;height >= 0; height--)
		{
			free(grid[height]);
			free(grid);
		}
	}
}
