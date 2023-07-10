#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: width of grid
 * @height: height of grid
 *
 * Return: NULL on failure or poiter to grid
 */

int **alloc_grid(int width, int height)
{
	int *grid;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * width * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < width * height; i++)
		grid[i] = '0';

	return (*grid);
}
