#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - it is a function that free all the memory that the struct taked
 * @d: it is a pointer called "d"
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
