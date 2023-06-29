#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: dest pointer
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
		p++;

	while (*src != '\0')
	{
		*p = *src;
		src++;
		p++;
	}

	*p = '\0';

	return (dest);
}
