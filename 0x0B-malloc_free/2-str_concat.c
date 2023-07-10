#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: str
 * @s2: str
 *
 * Return: NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int l1 = 0, l2 = 0, i = 0, j = 0;
	char *str;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';

	while (s1[l1] != '\0')
		l1++;

	while (s2[l2] != '\0')
		l2++;

	str = malloc(sizeof(char) * (l1 + l2 + 1));

	if (str == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}

	return (str);
}
