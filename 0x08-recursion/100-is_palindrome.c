#include "main.h"

/**
 * _strlength - print the length of string
 *
 * @s: pointer to string
 *
 * Return: length of s
 */

int _strlength(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlength(s + 1) + 1);
}

/**
 * palind - check if string is palindrom
 *
 * @s: pointer to string
 * @start: start of string
 * @end: end of string
 *
 * Return: 1 if palindrome and 0 if its not
 */

int palind(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (palind(s, start + 1, end - 1));
	}
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 *
 * @s: pointer to char string.
 *
 * Return: return 1 if palindrome else 0.
 */

int is_palindrome(char *s)
{
	int r = _strlength(s);

	return (palind(s, 0, r - 1));
}
