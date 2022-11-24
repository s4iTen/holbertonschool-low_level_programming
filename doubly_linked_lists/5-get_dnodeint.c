#include "lists.h"
/**
 * get_dnodeint_at_index - function that return the index node
 * @head: this is the node
 * @index: this is the index of the node
 * Return: Always the index node or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *a = head;
	unsigned int i = 0;

	while (i < index)
	{
		if (a == NULL)
			return (NULL);
		a = a->next;
		i++;
	}
	return (a);
}
