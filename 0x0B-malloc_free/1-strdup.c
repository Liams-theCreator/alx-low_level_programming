#include "main.h"

/**
 * _strlen - counts the size of string
 * @s: pointer to char
 * Return: return the size of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strdup - function that allocates a block of memory and initialize it.
 *
 * @str: string will be coppied to the allocated memory.
 *
 * Return: return allocated memory.
 */

char *_strdup(char *str)
{
	int i, len;
	char *s;

	if (str == 0)
	{
		return (NULL);
	}

	len = _strlen(str);
	s = malloc(len + 1 * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
