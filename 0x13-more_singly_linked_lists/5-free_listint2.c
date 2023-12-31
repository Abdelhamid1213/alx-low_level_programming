#include "lists.h"

/**
 * free_listint2 - a function that frees a list_t list
 * @head: pointer to head
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head != NULL)
	{
		current = *head;

		while ((next = current) != NULL)
		{
			current = current->next;
			free(next);
		}

		*head = NULL;
	}
}
