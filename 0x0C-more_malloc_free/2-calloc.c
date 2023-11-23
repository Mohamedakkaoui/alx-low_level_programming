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
	unsigned int i;
	char *chararray;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	chararray = malloc(size * nmemb);
	if (chararray == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		chararray[i] = 0;
	}
	return (chararray);
}
