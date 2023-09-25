#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle in the string haystack
 *
 * @haystack: the string to be scanned
 * @needle: the string to be searched in haystack
 *
 * Return: a pointer to the beginning of the located substring or NULL if the subtring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
