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
	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		int m, x, y;

		x = atoi(argv[1]);
		y = atoi(argv[2]);
		m = x * y;

		printf("%d\n", m);

		return (0);
	}
}
