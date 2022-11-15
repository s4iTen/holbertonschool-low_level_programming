#include "lists.h"
/**
 * print_list - its is a function that print the content of linked list
 * @h: it is the name of the linked list
 * Return: Always the number of the nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *a = h;
	int i = 0;

	while (a != NULL)
	{
		if (a->str != NULL)
		{
			printf("[%d] %s\n", a->len, a->str);
		}
		if (a->str == NULL)
			printf("[0] (nil)\n");
		a = a->next;
		i++;
	}
	return (i);
}
