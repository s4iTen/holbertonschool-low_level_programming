#include "dog.h"
/**
 * init_dog - check the code
 * @d: it is a pointer of struct dog called 'd'
 * @name: it is a pointer char called 'name'
 * @age: it is a variable of type float called 'age'
 * @owner: it is a pointer char called 'owner'
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
