#include "main.h"

/**
 * print_alphabet_x10 - use putchar to print alphabets 10 times.
 *
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		int c;

		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
