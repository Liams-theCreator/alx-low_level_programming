#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip to get from n to m.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int buffer;
	int counter;

	buffer = n ^ m;
	counter = 0;

	while (buffer)
	{
		counter++;
		buffer &= (buffer - 1);
	}

	return (counter);
}
