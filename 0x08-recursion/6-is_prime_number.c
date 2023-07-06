#include "main.h"

/**
 * is_prime - checks recursively the input from is_prime_number
 *
 * @n: iterator
 * @x: base number to check
 *
 * Return: 1 if n is a prime, else return 0 otherwise.
 */

int is_prime(int n, int x)
{
	if (x % n == 0 || x < 2)
		return (0);
	else if (n == x - 1)
		return (1);
	else if (x > n)
		return (is_prime(n + 1, x));
	return (1);
}

/**
 * is_prime_number - checks if the number is a prime number
 *
 * @n: the number to check
 *
 * Return: 1 if n is a prime, else return 0 otherwise.
 */

int is_prime_number(int n)
{
	return (is_prime(2, n));
}
