#include "main.h"

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
	while (*argv != '\0')
	{
		_putchar(argv);
		*argv++;
	}
}
