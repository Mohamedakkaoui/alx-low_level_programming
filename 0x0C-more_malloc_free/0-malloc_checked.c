#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - function that allocates memory w malloc
 *
 * @b : integer
 *
 *Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
