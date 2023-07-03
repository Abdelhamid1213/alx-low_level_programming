#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @s: pointer to memorry
 * @b: constant byte
 * @n: number of bytes of memory
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

	return (s)
}
