#include <stdlib.h>
/**
 * array_range - function creats an array of integers
 * @min : first number
 * @max : last number
 *Return: pointer to te new allocate memory
 */
int *array_range(int min, int max)
{
	int *array, i, num;

	if (min > max)
	{
		return (NULL);
	}
	array = (int *)malloc(sizeof(int) * (max - min + 1));
	if (array ==  NULL)
	{
		return (NULL);
	}
	num = min;
	for (i = 0; i <= (max - min); i++)
	{
		array[i] = num;
	       num++;
	}
	return (array);
}
