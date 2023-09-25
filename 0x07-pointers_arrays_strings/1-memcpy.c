#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: byte of memory area
 *
 * Return: Dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0

		for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
