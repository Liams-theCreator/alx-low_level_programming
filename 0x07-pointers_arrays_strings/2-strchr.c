#include <stdio.h>

/**
 * _strchr -  locates a character in a string
 *
 * @s: pointer to string
 * @c: pointer to character
 *
 * Return: if c found return occurence, if its not return NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return &s[i];
		}
	}
	return NULL;
}
