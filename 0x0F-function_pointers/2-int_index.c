#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 *
 * @array : an array of integer
 * @size : number of te elements in the array
 * @cmp : pointer to the function to compare values
 *
 *Return: return i .
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (!(array && cmp))
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
