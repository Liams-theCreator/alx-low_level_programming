#include "main.h"

/**
 * _strcpy - copy string from src to dest
 *
 * @dest: pointer to dest char
 * @src: pointer to src char
 *
 * Return: return destStart
 */

char *_strcpy(char *dest, char *src)
{
	char *destStart = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return destStart;
}
