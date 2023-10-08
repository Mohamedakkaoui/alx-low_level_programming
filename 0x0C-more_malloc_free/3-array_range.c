#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 *
 * @min : min number of the array
 * @max : max number of the array
 *
 *Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);

	a = (int *)malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
