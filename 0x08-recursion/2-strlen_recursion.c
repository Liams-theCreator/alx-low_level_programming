#include "main.h"

/**
 * _strlen_recursion - print length of string
 *
 * @s: pointer to string
 *
 * Retrun: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
