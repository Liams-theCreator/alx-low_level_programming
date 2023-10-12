#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of its parameters
 *
 * @n: The number of parameters
 * @...: The parameters to be summed
 *
 * Return: The sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
