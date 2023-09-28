#include "main.h"

/**
 * _strlen_recursion - print the length of string
 *
 * @s: pointer to string
 *
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
