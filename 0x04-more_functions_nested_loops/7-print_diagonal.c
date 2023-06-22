#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 *
 * @n: input value
 */

void print_diagonal(int n)
{
	int l, s;

	for (l = 0; l < n; l++)
	{
		if (n > 0)
		{
			for (s = 0; s < l; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
		_putchar('\n');
	}
}
