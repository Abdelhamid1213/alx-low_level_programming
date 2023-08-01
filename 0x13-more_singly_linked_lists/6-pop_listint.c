#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int n = 0;

	if (*head)
	{
		listint_t *next = (*head)->next;

		n = (*head)->n;
		free(*head);
		*head = next;
	}

	return (n);
}
