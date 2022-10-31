#include "dog.h"
/**
 * print_dog - a function that print the struct dog
 * @d: it is a pointer that called 'd'
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
			printf("nil");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
