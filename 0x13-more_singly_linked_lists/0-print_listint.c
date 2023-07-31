#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head pointer
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int c = 1;

	if (!h)
		return ((size_t)NULL);

	while (h->next)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	printf("%d\n", h->n);

	return (c);
}
