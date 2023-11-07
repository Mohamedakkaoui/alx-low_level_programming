#ifndef DOG_H
#define DOG_H
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
/**
 * struct dog - struct to old data of the dog
 *
 *@name : name of te dog
 *@owner : owner of the dog
 *@age : age of the dog
 *
 *this structure is used to reprsent data of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
