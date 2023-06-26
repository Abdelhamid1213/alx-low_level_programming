#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 *
 * @a: pointer 1
 * @b: pointer 2
 */

void swap_int(int *a, int *b)
{
	int *x = *a;
	int *y = *b;

	*a = *y;
	*b = *x;
}
