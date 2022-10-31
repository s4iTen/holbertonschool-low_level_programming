#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#ifndef HEADERFILE_H
#define HEADERFILE_H
/**
 * struct dog - check the code
 * @name: its an array of type char called 'name'
 * @age: its an variable of type float called 'age'
 * @owner: its an array of type char called 'owner'
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
