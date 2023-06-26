#include "main.h"
#include <unistd.h>

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 *
 * @str: string to get printed
 */

void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str + 0);
		str += 2;
	}
	_putchar('\n');
}
