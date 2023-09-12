#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: an integer
 *
 * Return : Value of the last digit
 */

int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
