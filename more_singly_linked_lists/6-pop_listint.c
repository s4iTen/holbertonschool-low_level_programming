#include "lists.h"
/**
 * pop_listint - this is a function that delete the first node in the list
 * @head: this is the list
 * Return: Always '0'
 */
int pop_listint(listint_t **head)
{
	listint_t *d;

	d = *head;
	*head = (*head)->next;
	free(d);
	return (0);
}
