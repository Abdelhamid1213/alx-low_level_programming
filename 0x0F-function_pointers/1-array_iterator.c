#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *                      on each element of an array.
 *
 * @array: array to take elements from
 * @size: size of array
 * @action: pointer to function to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
