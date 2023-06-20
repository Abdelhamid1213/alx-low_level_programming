#include "main.h"

/**
 * print_last_digit - function that prints the last digit of an integer.
 *
 * @n: integer.
 *
 * Return: 0 success.
 */

int print_last_digit(int n)
{
	int d;

	if (n < 0)
		d = -1 * (n % 10);
	else
		d = n % 10;
	_putchar(48 + d);
	return (d);
}
