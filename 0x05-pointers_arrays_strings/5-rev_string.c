#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: input
 */

void rev_string(char *s)
{
	int l = 0;
	int i, j;
	char holder;

	while (s[l] != '\0')
		l++;

	for (i = 0, j = l - 1; i < j; i++, j--)
	{
		holder = s[i];
		s[i] = s[j];
		s[j] = holder;
	}
}
