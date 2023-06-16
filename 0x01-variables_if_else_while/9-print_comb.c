#include <stdio.h>

/**
 * main - Entry point
 * 
 * Description: use putchar to prints all possible combinations of single-digit numbers.
 * 
 * Return: Always 0 (Success)
 */

int main(void) 
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + 48);
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
		++x;	
	}
	putchar('\n');
	return (0);
}
