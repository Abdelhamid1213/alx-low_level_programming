#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * @s: string
 *
 * Return: string length.
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		l++;
	}

	return (l);
}
