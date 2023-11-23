#include <stdlib.h>
/**
 *_calloc - function tat allocates memory for an arrya
 *
 * @nmemb : number of elements in the array
 * @size : size of the array
 *
 *Return: return a pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i;
	char *chararray;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(size * nmemb);
	if (array == NULL)
	{
		return (NULL);
	}
	chararray = (char *)array;
	for (i = 0; i < nmemb; i++)
	{
		chararray[i] = 0;
	}
	return (array);
}
