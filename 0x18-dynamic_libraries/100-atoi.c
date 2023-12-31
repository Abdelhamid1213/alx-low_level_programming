#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 *
 * @s: string that get converted.
 *
 * Return: 0 if no number found
 */

int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			result = (result * 10) + (*s - '0');
		else if (result > 0)
			break;
	} while (*s++);

	return (result * sign);
}
