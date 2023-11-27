#include "dog.h"
/**
 *init_dog - intialize a variable of type struct dog
 *
 * @d : pointer to struct
 * @name : name of the dog
 * @age : age of it
 * @owner : owner of the dog
 *
 *Return: doesnt return.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
