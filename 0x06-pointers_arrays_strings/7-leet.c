#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: pointer to string
 *
 * Return: string
 */

char *leet(char *s)
{
	char alpha[] = "aeotl";
	char num[] = "43071";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j] || s[i] == alpha[j] - 32)
				s[i] = num[j];
		}
	}
	return (s);
}
