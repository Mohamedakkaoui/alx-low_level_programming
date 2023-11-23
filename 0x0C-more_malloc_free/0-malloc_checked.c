#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b : size of te string
 *
 *Return: return a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *d;

	d = (void *)malloc(b);
	if (d == NULL)
	{
		exit(98);
	}
	return (d);
}
