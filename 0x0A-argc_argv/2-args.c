#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: number
 * @argv: array of strings
 *
 * Return: 0 Always success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
