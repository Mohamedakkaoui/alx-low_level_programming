#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_dog - function that freesa dog
 * @d : pointer to struct
 *Return: doesnt return
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
