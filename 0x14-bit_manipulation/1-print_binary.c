#include "main.h"

/**
 * print_binary - Prints binary representation of a number.
 *
 * @n: Number to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar('0' + (n & 1));
}
