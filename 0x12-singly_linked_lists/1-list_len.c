#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to head
 * Return: number of elements in list_t
 */

size_t list_len(const list_t *h)
{
	size_t len = 1;

	if (!h)
		return (0);
	while (h->next)
	{
		len++;
		h = h->next;
	}
	return (len);
}
