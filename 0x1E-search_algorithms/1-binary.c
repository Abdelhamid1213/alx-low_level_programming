#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_array - Prints an array of integers.
 * @array: A pointer to the first element of the array.
 * @left: The index of the left boundary.
 * @right: The index of the right boundary.
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array:");
	for (i = left; i < right; i++)
		printf(" %d,", array[i]);
	printf(" %d\n", array[i]);
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: If the value is not present in array or if array is NULL, -1.
 *         Otherwise, the index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;

		print_array(array, left, right);

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
