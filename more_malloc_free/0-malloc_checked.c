#include "main.h"
/**
 * malloc_checked - check the code
 * @b: it is a variable called 'b'
 * Return: Always pointer.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
