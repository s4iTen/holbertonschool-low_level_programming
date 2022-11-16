#include "lists.h"
/**
 * free_listint - this function free all the list
 * @head: this is the node at the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *f;

	while (head)
	{
		f = head->next;
		free(head);
		head = f;
	}
}
