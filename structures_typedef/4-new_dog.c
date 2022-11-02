#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * _strdup - function that duplicate from *p1 to *p2
 * @a: this is a pointer called 'a'
 * Return: Always a pointer
 */
char *_strdup(char *a)
{
	char *b;
	unsigned int i = 0;
	unsigned int j = 0;

	if (a == NULL)
		return (NULL);
	while (a[i])
		i++;
	b = malloc(sizeof(char) * (i + 1));
	if (b == NULL)
		return (NULL);
	while (a[j])
	{
		b[j] = a[j];
		j++;
	}
	b[j] = '\0';
	return (b);
}
/**
 * new_dog - this function duplicate from struct to an other struct
 * @name: pointer from new struct
 * @age: pointer from new struct
 * @owner: pointer from new struct
 * Return: Always the new pointer or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *nname;
	char *oowner;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	nname = _strdup(name);
	if (nname == NULL && name == NULL)
	{
		free(new);
		return (NULL);
	}
	oowner = _strdup(owner);
	if (oowner == NULL && owner == NULL)
	{
		free(new);
		free(nname);
		return (NULL);
	}
	new->name = nname;
	new->age = age;
	new->owner = oowner;
	return (new);
}
