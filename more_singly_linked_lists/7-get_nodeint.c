#include "lists.h"
/**
 * get_nodeint_at_index - function that return the index node
 * @head: this is the node
 * @index: this is the index of the node
 * Return: Always the index node or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *a = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (i < index)
	{
		a = a->next;
		i++;
	}
	return (a);
}
