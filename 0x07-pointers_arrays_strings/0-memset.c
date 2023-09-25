#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to char
 * @b: constant byte
 * @n: bytes of memory area
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
