#include "main.h"

/**
 * _abs - function that return absolute value of an integer.
 *
 * @n: integer.
 *
 * Return: possitive value of int.
 */

int _abs(int n)
{
	if (n > 0)
		n *= -1;
	return (n);
}
