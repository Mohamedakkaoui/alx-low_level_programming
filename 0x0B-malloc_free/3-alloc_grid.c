#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid  - function that returns a pointer to a 2 dim array of int
 *
 * @width :
 * @height :
 *
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i;
	int j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (i--; i >= 0; i--)
			free(a[i]);
			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
