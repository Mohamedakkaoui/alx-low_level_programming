#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that intialize a variable type
 *
 * @name : name fo the dog
 * @age : age of the dog
 * @owner: owner of the dog
 * @d : pointer to a struct
 *
 *Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
