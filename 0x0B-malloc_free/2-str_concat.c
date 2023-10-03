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
 * str_concat - concatenate two strings
 *
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: string s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int length1, length2;
	char *mem;

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
	mem = (char *)malloc((length1 + length2 + 1) * sizeof(char));

	if (mem == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length1; i++)
	{
		mem[i] = s1[i];
	}

	for (j = 0; j < length2; j++)
	{
		mem[length1 + j] = s2[j];
	}
	mem[length1 + length2] = '\0';

	return (mem);
}
