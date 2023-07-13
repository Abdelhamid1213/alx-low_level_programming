#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to take from s2
 *
 * Return: pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	unsigned int x = 0, y = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n > j)
		n = j;

	s = malloc(i + n + 1);
	if (s == NULL)
		return (NULL);

	while (s1[x] != '\0')
	{
		s[x] = s1[x];
		x++;
	}
	for (y = 0; y < n && s2[y] != '\0'; y++)
	{
		s[x] = s2[y];
		x++;
	}
	s[x] = '\0';
	return (s);
}
