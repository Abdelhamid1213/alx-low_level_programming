#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates an array of chars, and initializes
 *                           it with a specific char.
 *
 * @size: size of array
 * @c: first char in array
 *
 * Return: NULL if fail.
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
