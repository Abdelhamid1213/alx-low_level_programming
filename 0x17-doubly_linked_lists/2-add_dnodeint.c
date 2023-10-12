#include "lists.h"

/**
 * add_dnodeint - ..
 * @h: ..
 * Return: ..
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *node = malloc(sizeof(dlistint_t));
    if (!node)
        return (NULL);

    node->n = n;
    node->prev = NULL;
    node->next = *head;

    if (*head)
        (*head)->prev = node;

    *head = node;

    return (node);
}
