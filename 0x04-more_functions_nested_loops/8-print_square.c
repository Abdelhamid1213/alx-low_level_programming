#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 *
 * @size: is the size of the square
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int v, h;

		for (v = 0; v < size; v++)
		{
			for (h = 0; h < size; h++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
