#include "lists.h"
/**
 * insert_dnodeint_at_index - func that inset a node at the index
 * @h: this is the head of the list
 * @idx: this is the index of the new node
 * @n: this is the data
 * Return: Always the new node or NULL if it fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *a;
	dlistint_t *b = *h;

	a = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (a == NULL)
		return (NULL);
	a->n = n;
	if (idx == 0)
	{
		a->next = b;
		*h = a;
		return (a);
	}
	while (i < idx - 1)
	{
		if (b == NULL || b->next == NULL)
			return (NULL);
		b = b->next;
		i++;
	}
	a->next = b->next;
	b->next = a;
	return (a);
}
