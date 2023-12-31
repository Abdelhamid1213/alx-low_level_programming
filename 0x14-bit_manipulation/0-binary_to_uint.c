#include "main.h"

/**
 * is_number - checks if string has only numbers
 * @str: string to check
 * Return: 0 is true 1 if false
 */

unsigned int is_number(const char *str)
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
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, sum = 0, v = 1;
	int i;

	if (!b || !is_number(b))
		return (0);

	len = strlen(b);

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			sum += v;
		v *= 2;
	}

	return (sum);
}
