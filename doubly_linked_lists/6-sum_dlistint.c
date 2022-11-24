#include "lists.h"
/**
 * sum_dlistint - this function return the sum of the int data
 * @head: this is the head of the list
 * Return: Always the sum of the integers
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *a = head;
	int i = 0;

	while (a != NULL)
	{
		i += a->n;
		a = a->next;
	}
	return (i);
}
