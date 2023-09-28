#include "main.h"

/**
 * factorial - factorial of a number
 *
 * @n: integer
 *
 * Return: factorial of n , if it's an error return -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
