#include "main.h"
/**
 * _isupper - Entry point
 * @c : ascii value
 * checks for uppercase char
 *
 * Return: if success 1
 * and 0 if there is an error
 */

int _isupper(char c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
}
