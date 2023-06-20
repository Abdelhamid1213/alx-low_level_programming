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

	d = n % 10
	_putchar(d);
	return (d);
}
