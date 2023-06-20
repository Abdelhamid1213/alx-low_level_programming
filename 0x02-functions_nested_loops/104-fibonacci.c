#include <stdio.h>

#define LARGEST 10000000000

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers
 *	starting with 1 and 2 followed by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long long fr1 = 0, bk1 = 1, fr2 = 0, bk2 = 2;
	unsigned long long hold1, hold2, hold3;
	int count;

	printf("%llu, %llu, ", bk1, bk2);

	for (count = 2; count < 98; count++)
	{
		if (bk1 + bk2 > LARGEST || fr2 > 0 || fr1 > 0)
		{
			hold1 = (bk1 + bk2) / LARGEST;
			hold2 = (bk1 + bk2) % LARGEST;
			hold3 = fr1 + fr2 + hold1;
			fr1 = fr2;
			fr2 = hold3;
			bk1 = bk2;
			bk2 = hold2;
			printf("%llu%010llu", fr2, bk2);
		}
		else
		{
			hold2 = bk1 + bk2;
			bk1 = bk2;
			bk2 = hold2;
			printf("%llu", bk2);
		}

		if (count != 97)
			printf(", ");
	}

	printf("\n");
	return (0);
}
