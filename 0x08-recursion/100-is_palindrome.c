#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen(s));
	}
	return (0);
}

/**
 * is_palindrome_w - check fo is_palindrome
 *
 * @str: the string
 * @len: length of string
 * @count: counter of recursion
 *
 * Return: 1 if string is a palindrome, 0 if it is not.
 */

int is_palindrome_w(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (is_palindrome_w(str, len - 1, count + 1));
	return (0);
}

/**
 * is_palindrome - checks if the string is a palindrome
 *
 * @s: the string to check
 *
 * Return: 1 if string is a palindrome, 0 if it is not.
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);
	int count = 0;

	return (is_palindrome_w(s, len - 1, count));
}
