#include "main.h"
#include <unistd.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: input
 */

void print_rev(char *s)
{
	int l = 0;
	int i;

	while (s[l] != '\0')
		l++;

	for (i = l - 1; i >= 0; i--) 
	{
		char x = s[i];

		write(1, &x, 1);
	}
}
