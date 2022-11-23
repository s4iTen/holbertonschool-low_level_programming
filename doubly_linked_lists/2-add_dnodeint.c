#include "lists.h"
/**
 * add_dnodeint - this function create new node in the head of the list
 * @head: this is the head of the list
 * @n: this in the integer data
 * Return: Always the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
