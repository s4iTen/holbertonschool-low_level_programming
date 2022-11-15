#include "lists.h"
#include <stdio.h>
/**
 * list_len - it is a function that return the number of elements in the list
 * @h: it is a list called 'h'
 * Return: Always the number of the elements
 */
size_t list_len(const list_t *h)
{
	const list_t *a = h;
	int i = 0;

	while (a != NULL)
	{
		a = a->next;
		i++;
	}
	return (i);
}
