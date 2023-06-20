#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the n times table, starting with 0.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int x, n;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 5 == 0) || (n % 3 == 0))
			x += n;
	}
	printf("%d\n", x);

	return (0);
}
