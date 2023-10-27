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
	unsigned long int xor = n ^ m;
	unsigned int count = 0;
	int i = 0;

	for (; i < (sizeof(n) * 8); i++)
	{
		if (xor & (1 << i))
		{
			count++;
		}
	}

	return (count);
}
