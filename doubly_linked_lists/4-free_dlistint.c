#include "lists.h"
/**
 * free_dlistint - this function free all the node in the head
 * @head: this is the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *f;

	while (head)
	{
		f = head->next;
		free(head);
		head = f;
	}
}
