#include "main.h"

/**
 * print_binary - Prints binary representation of a number.
 *
 * @n: Number to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	int i = 31;

	for (i = 31; i >= 0; i--)
	{
		_putchar('0' + ((n >> i) & 1));
	}
}
