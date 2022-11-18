#include "lists.h"
/**
 * sum_listint - function that return the sum of all the data in the node
 * @head: this is the node
 * Return: Always the sum of the data (n) of the node
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	
	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
