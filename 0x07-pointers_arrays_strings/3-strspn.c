#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 *
 * @s: str
 * @accept: str
 *
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0')
	{
		int x = 0;

		for (const char *c = accept; *c != '\0'; c++)
		{
			if (*s == *c)
			{
				x = 1;
				break;
			}
		}

		if (!x)
			break;

		i++;
		s++;
	}

	return (i);
}
