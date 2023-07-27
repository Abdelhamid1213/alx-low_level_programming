#include "lists.h"
#include <string.h>
/**
 * add_node - returns the number of elements in a linked list
 * @head: pointer to head
 * @str: ..
 * Return: number of elements in list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
