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
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
			printf("nil\n");
	}
}
