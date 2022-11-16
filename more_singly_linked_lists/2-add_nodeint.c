#include "lists.h"
/**
 * add_nodeint - this function add new node at the beginning of the list
 * @head: this is the list
 * @n: this is the int
 * Return: Always the list or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
