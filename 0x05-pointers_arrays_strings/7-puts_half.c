#include "main.h"
#include <unistd.h>

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 *
 * @str: string to get printed
 */

void puts_half(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		str += length / 2;
	else
		str += (length - 1) / 2;

	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}

	write(1, "\n", 1);
}
