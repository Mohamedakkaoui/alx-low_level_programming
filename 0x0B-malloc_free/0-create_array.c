#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 *
 * @size : size of of the array
 * @c : type of variable
 *
 *Return: return 0.
 */
char *create_array(unsigned int size, char c)
{
	char *d;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	d  = (char *)malloc(sizeof(char) * size);
	if (d == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			d[i] = c;
		}
	}
	return (d);
}
