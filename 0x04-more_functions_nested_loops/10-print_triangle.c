#include"main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 *
 * @size: size of the triangle
 *
 * Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int v, h;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (v = 1; v <= size; ++v)
		{
			for (h = 1; h <= size; ++h)
			{
				if ((v + h) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
