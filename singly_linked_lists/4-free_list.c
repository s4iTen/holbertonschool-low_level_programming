#include "lists.h"
/**
 * free_list - this function frees all the list
 * @head: this is the list
 */
void free_list(list_t *head)
{
	list_t *f;

	while (head != NULL)
	{
		f = head->next;
		free(f);
		f = head;
	}
}
