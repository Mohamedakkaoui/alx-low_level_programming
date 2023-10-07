#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 *
 *@nmemb : number of members
 * @size : size of the array
 *
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	a = malloc(size * nmemb);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
	{
		a[i] = 0;
	}
	return (a);
}
