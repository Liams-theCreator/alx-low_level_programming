#include "main.h"

/**
 * _strcat - concatenates two strings at n bytes
 *
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of byte it must take
 *
 * Return: Destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
