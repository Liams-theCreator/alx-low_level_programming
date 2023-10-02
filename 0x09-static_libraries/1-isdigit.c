#include "main.h"
/**
 * _isdigit - Entry point
 * @c : ascii value
 * checks for digit
 *
 * Return: if success 1
 * and 0 if there is an error
 */

int _isdigit(char c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
