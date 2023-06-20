#include "main.h"

/**
 * main - Entry point
 *
 * Description: print Fibonacci sequence below 4,000,000.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long n1 = 0, n2 = 1, x;
	float z;

	while (1)
	{
		x = n1 + n2;

		if (x > 4000000)
			break;

		if ((x % 2) == 0)
			z += x;

		n1 = n2;
		n2 = x;
	}
	printf("%.0f\n", z);

	return (0);
}
