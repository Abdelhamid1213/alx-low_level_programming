#include "lists.h"

/**
 * add_dnodeint - ..
 * @head: ..
 * @n: ..
 * Return: ..
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *temp = *head;
    dlistint_t *node = malloc(sizeof(dlistint_t));

    if (!node)
        return (NULL);
    
    while (temp->next != NULL)
        temp = temp->next;
    
    node->n = n;
    node->next = NULL;
    node->prev = temp;

    temp->next = node;

    return (head);
}
