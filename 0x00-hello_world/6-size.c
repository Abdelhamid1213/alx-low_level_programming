#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("int : %lu byte(s)\n", sizeof(int));
	printf("double : %lu byte(s)\n", sizeof(double));
	printf("char: %lu byte(s)\n", sizeof(char));
	printf("long int: %lu byte(s)\n", sizeof(long int));
	printf("long long int: %lu byte(s)\n", sizeof(long long int));
	printf("float: %lu byte(s)\n", sizeof(float));
	return (0);
}
