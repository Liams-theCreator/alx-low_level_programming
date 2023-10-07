#include "main.h"

/**
 * _strlen - counts the size of string
 *
 * @s: pointer to char
 *
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
 * string_nconcat - allocating a block of memory
 *
 * @n: size
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: concatenated strings , NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, length1, length2;
	char *con;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	length1 = _strlen(s1);
	length2 = _strlen(s2);

	if (n >= length2)
	{
		n = length2;
	}

	con = (char *)malloc(length1 + n + 1);

	if (con == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length1; i++)
	{
		con[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		con[length1 + j] = s2[j];
	}
	con[length1 + n] = '\0';

	return (con);
}
