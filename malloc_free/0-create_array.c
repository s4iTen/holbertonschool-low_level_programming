#include "main.h"
/**
 * *create_array - prints buffer in hexa
 * @size: the size of p
 * @c: the variable char
 *
 * Return: Pointer.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	i = 0;
	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(size * sizeof(char));
	if (p == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
