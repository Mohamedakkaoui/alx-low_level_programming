#ifndef DOG_H
#define DOG_H
/**
 * struct dog - strcut dog
 * @name :  name of dog
 * @age : age of the dog
 * @owner : owner of the dog
 *
 * description : struct of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
