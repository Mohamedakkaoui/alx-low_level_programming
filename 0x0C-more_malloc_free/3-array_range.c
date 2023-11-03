#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - function that creates an array of int
 *
 * @min : minimum number to start the array with
 * @max : max number to get to
 *
 *Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = (int *)malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; min < max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
