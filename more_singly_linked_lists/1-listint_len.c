#include "lists.h"
/**
 * listint_len - this function return the lenght of the list
 * @h: this is the list
 * Return: Always the lenght of the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *a = h;
	int i = 0;

	while (a != NULL)
	{
		a = a->next;
		i++;
	}
	return (i);
}
