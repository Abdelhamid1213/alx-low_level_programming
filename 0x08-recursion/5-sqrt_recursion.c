#include "main.h"

/**
 * _sqrt_recursion_c - a function that do the recursion
 *
 * @n : input number
 * @min: minimum guesses
 * @max: maximum guesses
 *
 * Return: square root of @n or -1
 */

int _sqrt_recursion_c(int n, int min, int max)
{
	int guess, guess_square;

	guess = (min + max) / 2;
	guess_square = guess * guess;

	if (guess_square == n)
		return (guess);
	else if (min == max)
		return (-1);
	else if (guess_square < n)
		return (_sqrt_recursion_c(n, guess + 1, max));
	else
		return (_sqrt_recursion_c(n, min, guess - 1));
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
	if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (_sqrt_recursion_c(n, 1, n));
}
