#include "lists.h"
/**
 * print_listint - this function print all the lists
 * @h: this is the list
 * Return: Always the number of the lists
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *a = h;
	int i = 0;

	while (a != NULL)
	{
		printf("%d\n", a->n);
		a = a->next;
		i++;
	}
	return (i);
}
