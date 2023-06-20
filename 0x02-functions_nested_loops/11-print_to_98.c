#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98.
 *
 * @n: starting point
 *
 */

void print_to_98(int n)
{
	while (n != 98)
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	printf("98\n");
}
