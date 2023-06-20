#include"main.h"

/**
 * print_times_table - function that prints the n times table,
 *						starting with 0.
 * @n: input number
 */

void print_times_table(int n)
{
	int z, y, x;

	if (n < 16 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar(48);
			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');

				z = x * y;

				if (z <= 9)
					_putchar(' ');
				if (z <= 99)
					_putchar(' ');

				if (z >= 100)
				{
					_putchar((z / 100) + 48);
					_putchar((z / 10) % 10 + 48);
				}
				else if (z <= 99 && z >= 10)
					_putchar((z / 10) + 48);
				_putchar((z % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
