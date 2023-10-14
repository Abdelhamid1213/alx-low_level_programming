#include "lists.h"

/**
 * free_dlistint - ..
 * @head: ..
 * Return: ..
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr);
	}
}
