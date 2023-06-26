#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: string to calculate the length of
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
