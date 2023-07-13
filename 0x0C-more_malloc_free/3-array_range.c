#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 *
 * @min: min and first number in array
 * @max: max and last number in array
 *
 * Return: pointer or NULL
 */

int *array_range(int min, int max)
{
	int i;
	int elements = max - min;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc(elements * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < elements; i++)
		array[i] = i;

	return (array);
}
