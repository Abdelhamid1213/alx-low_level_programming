#include "main.h"

/**
 * main - Entry point
 *
 * Description: print first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long n1 = 0, n2 = 1, x;

	for (i = 0; i < 50; ++i)
	{
		x = n1 + n2;
		printf("%lu", x);

		n1 = n2;
		n2 = x;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
