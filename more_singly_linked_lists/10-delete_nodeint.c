#include "lists.h"
/**
 * delete_nodeint_at_index - this func delete the node with the index
 * @head: this is the list of nodes
 * @index: this is the index of the node
 * Return: Always 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new;
	listint_t *a = *head;
	unsigned int i = 0;

	if (a == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(a);
		return (1);
	}
	while (i < index - 1)
	{
		if (a->next == NULL)
			return (-1);
		a = a->next;
		i++;
	}
	new = a->next;
	a->next = new->next;
	free(new);
	return (1);
}
