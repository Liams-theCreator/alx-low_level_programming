#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor = n ^ m;
	unsigned int count = 0;
	int i = 0;

	for (; i < (sizeof(n) * 8); i++)
	{
		if (xor&(1 << i))
		{
			count++;
		}
	}

	return (count);
}