#include "lists.h"
/**
 * print_dlistint - function that print the elements in the list
 * @h: this is the head of the list
 * Return: Always the number of the nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *a = h;
	int i = 0;

	while (a != NULL)
	{
		printf("%d\n", a->n);
		a = a->next;
		i++;
	}
	return (i);
}
