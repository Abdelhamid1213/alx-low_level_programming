#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int i, x;

	for (x = 0; x <= 10; x++)
	{
		for (i = 0; i <= 14; i++)
		{
			if ((i / 10) != 0)
				_putchar('0' + i / 10);
			_putchar('0' + i % 10);
		}
		_putchar('\n');
	}
}
