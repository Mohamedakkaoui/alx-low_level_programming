#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creat a new dog
 *
 * @name : name of the dog
 * @age : age of the dog
 * @owner : owner of the dog
 *
 *Return: returns nothing.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, j, x, y;

	dog_t *d;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		;
	d->name = malloc(i * sizeof(char));
	if (d->name == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < i; x++)
	{
		d->name[i] = name[i];
	}
	d->age = age;
	for (j = 0; owner[j] != '\0'; j++)
		;
	d->owner = malloc(sizeof(char) * j);
	if (d->owner == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < j; y++)
	{
		d->owner[y] = owner[j];
	}
	return (d);
}
