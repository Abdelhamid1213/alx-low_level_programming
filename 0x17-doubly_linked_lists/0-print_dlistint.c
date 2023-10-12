#include "lists.h"

/**
 * print_dlistint - ..
 * @h: ..
 * Return: ..
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
