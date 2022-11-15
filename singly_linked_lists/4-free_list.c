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
		f = head;
		f->len = head->len;
		f->str = head->str;
		f->next = head->next;
		head = head->next;
		free(f);
	}
}
