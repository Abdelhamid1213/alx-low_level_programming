#include "main.h"

/**
 * print_alphabets - print alphabets using _putchar
 *
 * Description : use putchar to print a - z.
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a' ; x <= 'z' ; x++)
		_putchar(x);
	_putchar('\n');
}
