#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src,
 *           including the terminating null byte (\0),
 *           to the buffer pointed to by dest.
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int i;

	while (src[l] != '\0')
		l++;

	for (i = 0; i <= l; i++)
		dest[i] = src[i];

	return (dest);
}
