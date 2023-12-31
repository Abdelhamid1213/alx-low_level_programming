#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 *
 * @array: array to check
 * @size: size of array
 * @cmp:  pointer to function to compare values
 *
 * Return: -1 or index of element in array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
