#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block using malloc
 * @ptr : pointer to the memory previously allocated with a call to malloc
 * @old_size : is the size, in bytes, of the allocated space for ptr
 * @new_size : is the new size, in bytes of the new memory block
 *Return: return eiter ptr or new_ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
		{
			free(newptr);
			return (newptr);
		}
	}
	else
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < old_size; i++)
		{
			newptr[i] = ((char *)ptr)[i];
		}
		free(newptr);
	}
	return (newptr);
}
