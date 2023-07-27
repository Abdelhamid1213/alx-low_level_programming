#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int c = 1;

	if (!h)
		return (0);
	while (h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		c++;
		h = h->next;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (c);
}
