#include "function_pointers.h"
/**
 *int_index -  function that searches for an integer
 *@array : array
 *@size : size of the array
 *@cmp : pointer to a function
 *Return: return the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		else
		{
			for (i = 1; i < size; i++)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
