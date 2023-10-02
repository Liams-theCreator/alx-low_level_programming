#include "main.h"

/**
 * _isupper - checks for uppercase char
 * @c : ascii value
 *
 * Return: if success 1
 * and 0 if there is an error
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	return (0);
}
