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
	return (n);
}

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
