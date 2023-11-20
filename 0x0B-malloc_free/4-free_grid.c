#include <stdlib.h>
/**
 * free_grid - function tht freesa 2 dimensional array
 * @grid : te array
 * @height : height of grid
 *Return: doesnt return
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
