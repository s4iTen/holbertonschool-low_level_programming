#ifndef HEADERFILE_H
#define HEADERFILE_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
