#include "main.h"

/**
 * create_array - initializes an array with a specific char
 *
 * @size: size of allocated memory
 * @c: specified char
 *
 * Return: allocated memory
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return NULL;
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';
	return (s);
}
