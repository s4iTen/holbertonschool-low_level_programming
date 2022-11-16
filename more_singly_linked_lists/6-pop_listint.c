#include "lists.h"

int pop_listint(listint_t **head)
{
    listint_t *d;
    
    while (*head != NULL)
    {
        d = *head;
        *head = (*head)->next;
        free(d);
    }
    return (0);
}