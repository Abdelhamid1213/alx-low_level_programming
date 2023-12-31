#include "main.h"
#include <unistd.h>

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 *
 * @str: string to get printed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}
