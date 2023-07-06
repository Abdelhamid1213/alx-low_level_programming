#include "main.h"

/**
 * sqrt_wrapper - checks the input number from n to the base
 *
 * @n: number is squared and compared against base
 * @x: base number to check
 *
 * Return: natural square root of number base
 */

int sqrt_wrapper(int n, int x)
{
	if (n * n == x)
		return (n);
	if (n * n > x)
		return (-1);
	return (sqrt_wrapper(n + 1, x));
}

/**
 * _sqrt_recursion - a function that returns the natural
 *                   square root of a number.
 * @n: number
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (sqrt_wrapper(1, n));
}
