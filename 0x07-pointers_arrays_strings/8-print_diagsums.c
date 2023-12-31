#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 *                   of a square matrix of integers.
 *
 * @a: input pointer
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i, x, y;

	x = 0;
	y = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			x += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			y += a[i];
	}
	printf("%d, %d\n", x, y);
}
