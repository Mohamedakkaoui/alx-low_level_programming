#include "main.h"
#include <stdlib.h>

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
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
			free(grid);
		}
	}
}
