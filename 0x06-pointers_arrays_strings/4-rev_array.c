#include "main.h"

/**
 * reverse_array - function tat reverses the content of an arry of integers
 *
 * @a : an array
 * @n : number of elements of the array
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
