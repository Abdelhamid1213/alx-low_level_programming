#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 *            which contains a copy of the string given as a parameter.
 *
 * @str: string to make a copy of
 *
 * Return: NULL or Pointer
 */

char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *new_str;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	new_str = malloc(sizeof(char) * (i + 1));

	if (new_str == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		new_str[j] = str[j];
		j++;
	}

	return (new_str);
}
