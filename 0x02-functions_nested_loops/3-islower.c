#include "main.h"

/**
 * _islower - checks for lower case character.
 *
 * @c: input value.
 *
 * Return: 1 if lowwercase 0 otherwise.
 */

int _islower(int c)
{
	if ('a' <= c <= 'z')
		return (1);
	else
		return (0);
}
