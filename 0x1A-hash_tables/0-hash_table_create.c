#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: pointer to the newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_node_t **new_array;

	if (size <= 0)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	new_array = malloc(sizeof(hash_node_t));
	if (!new_array)
		return (NULL);

	hash_table->size = size;
	hash_table->array = new_array;

	return (hash_table);
}
