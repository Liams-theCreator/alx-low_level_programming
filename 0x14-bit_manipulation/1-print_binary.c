#include "main.h"

/**
 * print_binary - Prints binary representation of a number.
 *
 * @n: Number to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	int i;

	for (i = (sizeof(n) * 8) - 1; i >= 0; i--)
	{
		_putchar('0' + ((n >> i) & 1));
	}
}
