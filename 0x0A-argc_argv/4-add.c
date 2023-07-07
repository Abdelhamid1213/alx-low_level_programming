#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * isNumber - chackes if an array is number
 *
 * @num: string to check
 *
 * Return: 1 if number else 0
 */

int isNumber(char num[])
{
	int i, len = strlen(num);

	for (i = 0; i < len; i++)
	{
		if (!isdigit(num[i]))
			return (0);
	}
	return (1);
}

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
	int sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isNumber(argv[i]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
