#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: use putchar to prints all single digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);

	return (0);
}
