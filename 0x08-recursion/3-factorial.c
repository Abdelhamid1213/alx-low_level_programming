#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 *
 * @n : number to return the factorial of.
 *
 * Return : factorial if n > 0, 1 if n = 0, -1 if n < 0;
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n > 0)
		return (n * factorial(n - 1));
}
