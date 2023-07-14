#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * mult - initialize array with 0 byte
 *
 * @s1: str 1
 * @s2: str 2
 *
 */
void mult(char *s1, char *s2)
{
	int i, l1, l2, len, d1, d2, result = 0, tmp;
	char *ptr;
	void *temp;

	l1 = strlen(s1);
	l2 = strlen(s2);
	tmp = l2;
	len = l1 + l2;
	ptr = calloc(sizeof(int), len);

	temp = ptr;

	for (l1--; l1 >= 0; l1--)
	{
		d1 = s1[l1] - '0';
		result = 0;
		l2 = tmp;
		for (l2--; l2 >= 0; l2--)
		{
			d2 = s2[l2] - '0';
			result += ptr[l2 + l1 + 1] + (d1 * d2);
			ptr[l1 + l2 + 1] = result % 10;
			result /= 10;
		}
		if (result)
			ptr[l1 + l2 + 1] = result % 10;
	}

	while (*ptr == 0)
	{
		ptr++;
		len--;
	}

	for (i = 0; i < len; i++)
		printf("%i", ptr[i]);
	printf("\n");
	free(temp);
}

/**
 * is_number - checks if string has only
 *                numbers
 *
 * @str: string to check
 *
 * Return: 0 is true 1 if false
*/

int is_number(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
/**
 * main - print multiplication of arguments
 *
 * @argc: number of args
 * @argv: array of strings
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	char *n1 = argv[1];
	char *n2 = argv[2];

	if (argc != 3 || !is_number(n1) || !is_number(n2))
	{
		printf("Error\n");
		exit(98);
	}

	if (*n1 == '0' || *n2 == '0')
	{
		printf("0\n");
	}
	else
		mult(n1, n2);
	return (0);
}
