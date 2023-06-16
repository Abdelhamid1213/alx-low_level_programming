#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: use putchar to print alphabets.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x = 'a';

	for (int i = 0; i < 26; i++)
		putchar(x + i);
	return (0);
}
