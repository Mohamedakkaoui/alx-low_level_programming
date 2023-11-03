#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - function that allocates memory for an array
 *
 * @nmemb : number of elements
 * @size : size of the array
 *
 *Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *c;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	c = (char *)malloc(size * nmemb);
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size * nmemb; i++)
	{
		c[i] = 0;
	}
	return (c);
}
