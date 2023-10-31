#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 D grid
 *
 * @grid : the array
 * @height : te height of the array
 *
 *Return: Always 0.
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
