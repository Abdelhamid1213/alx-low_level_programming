#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: head pointer
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int c = 1;

	if (!h)
		return ((size_t)NULL);

	while (h->next)
	{
		c++;
		h = h->next;
	}

	return (c);
}
