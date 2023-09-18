#include "main.h"

/**
 * _strlen - count length of string
 *
 * @s: char
 *
 * Return: return the length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
