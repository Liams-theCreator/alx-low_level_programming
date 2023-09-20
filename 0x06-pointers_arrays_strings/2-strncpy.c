#include "main.h"

/**
 * _strncpy - copy string from source to destination
 *
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of byte
 *
 * Return: Destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
