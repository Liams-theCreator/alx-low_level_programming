#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return: Destination
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (; dest[i] ! != '\0'; i++)
	{
		continue;
	}

	for (; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
