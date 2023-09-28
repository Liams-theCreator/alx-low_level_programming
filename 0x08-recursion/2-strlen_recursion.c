#include "main.h"

/**
 * _strlen_recursion - print length of string
 *
 * @s: pointer to string
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	return (_strlen_recursion(s + 1) + 1);
}
