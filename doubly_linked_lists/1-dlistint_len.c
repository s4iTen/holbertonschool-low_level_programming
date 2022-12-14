#include "lists.h"
/**
 * dlistint_len - func that return the number of the elements in the list
 * @h: this is the head of the list
 * Return: Always the number of the nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *a = h;
	int i = 0;

	while (a != NULL)
	{
		a = a->next;
		i++;
	}
	return (i);
}
