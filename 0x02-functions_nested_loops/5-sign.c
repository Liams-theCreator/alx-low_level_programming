#include "main.h"
/**
 * print_sign - Entry point
 * @n : printed int
 * print n and check if its greater,less than 0 or equal to 0
 *
 * Return: if greater than zero return 1
 * if equal to zero return 0
 * and if less than zero return -1
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
