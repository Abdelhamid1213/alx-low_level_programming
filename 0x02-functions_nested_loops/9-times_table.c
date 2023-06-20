#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 */

void times_table(void)
{
int x, y, z;

	for (x = 0; x <= 9; ++x)
	{
		putchar(48);
		for (y = 1; y <= 9; ++y)
		{
			putchar(',');
			putchar(' ');

			z = x * y;

			if (z <= 9)
				putchar(' ');
			else
				putchar((z / 10) + 48);

			putchar((z % 10) + 48);
		}
		putchar('\n');
	}
}
