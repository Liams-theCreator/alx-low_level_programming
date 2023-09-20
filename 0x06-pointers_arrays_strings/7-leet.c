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
	int i = 0;
	int j = 0;

	for (; s[i] != '\0'; i++)
	{
		for (; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j] || s[i] == alpha[j] - 32)
				s[i] = num[j];
		}
	}
	return (s);
}
