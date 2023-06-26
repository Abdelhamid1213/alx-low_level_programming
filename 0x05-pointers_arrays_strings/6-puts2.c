#include "main.h"
#include <unistd.h>

/**
 * puts2 - prints every other character of a string, starting
 * with the first character, followed by a new line.
 *
 * @str: string to get half printed
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str += 2;
	}
	write(1, "\n", 1);
}
