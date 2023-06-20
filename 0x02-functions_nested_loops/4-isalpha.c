#include "main.h"

/**
 * _isalpha - checks for alphabet
 *
 * @c: input value.
 *
 * Return: 1 if alphabet 0 otherwise.
 */

int _isalpha(int c)
{
	if ('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z')
		return (1);
	return (0);
}
