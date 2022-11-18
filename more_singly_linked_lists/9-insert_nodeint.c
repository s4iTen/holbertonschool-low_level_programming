#include "lists.h"
/**
 * insert_nodeint_at_index - func that insert new node at the index position
 * @head: this is the list of nodes
 * @idx: this is the index position
 * @n: this is the data of the node
 * Return: Always the new node or NULL if it fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *a;
	listint_t *b = *head;

	a = (listint_t *)malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);
	a->n = n;
	if (idx == 0)
	{
		a->next = b;
		*head = a;
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
