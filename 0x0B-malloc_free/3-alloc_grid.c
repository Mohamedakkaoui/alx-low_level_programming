#include <stdlib.h>
/**
 * alloc_grid - returns pointer to a 2 dimensional array of ints
 *
 * @width : width of the array
 * @height : height of the array
 *
 *Return: returns a pointer to te array
 */
int **alloc_grid(int width, int height)
{
	int **array, i, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			array[x][y] = 0;
		}
	}
	return (array);
}
