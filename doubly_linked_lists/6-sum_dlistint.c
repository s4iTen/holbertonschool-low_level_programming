#include "lists.h"
/**
 * sum_dlistint - this function return the sum of the int data
 * @head: this is the head of the list
 * Return: Always the sum of the integers
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
