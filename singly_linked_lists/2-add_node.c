#include "lists.h"
/**
 * add_node - it is a function that ann new node every time
 * @head: it is a list called 'head'
 * @str: it is a string called 'str'
 * Return: always the address of the list or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (list_t *)malloc(sizeof(list_t));
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	if (new_node == NULL)
		return (new_node);
	else
		return (NULL);
}
