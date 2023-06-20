#include "main.h"

/**
 * print_sign - print sign of number n.
 *
 * @n: number to print sign of.
 *
 * Return: 1 if possitive -1 if negative else 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
