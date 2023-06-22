#include <stdio.h>

/**
 * _square - finds the square root
 *
 * @x: input numberber
 *
 * Return: square root of x
 *
 */

double _square(double x)
{
	float square, tmp;

	square = x / 2;
	tmp = 0;

	while (square != tmp)
	{
		tmp = square;
		square = (x / tmp + tmp) / 2;
	}
	return (square);
}

/**
 * largest_prime_factor - finds and prints the largest
 *			prime factor of numberber (number)
 *
 * @number: numberber to find
 */

void largest_prime_factor(long int number)
{
	int prime, largest;

	while (number % 2 == 0)
		number = number / 2;

	for (prime = 3; prime <= _square(number); prime += 2)
	{
		while (number % prime == 0)
		{
			number = number / prime;
			largest = prime;
		}
	}


	if (number > 2)
		largest = number;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	largest_prime_factor(612852475143);

	return (0);
}
