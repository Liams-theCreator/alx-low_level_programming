#include "main.h"

/**
 * _pow_recursion - calculate value of x power of y
 *
 * @x: integer
 * @y: power of integer
 *
 * Return: if y less than 0 return -1 if it's not return the value of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
