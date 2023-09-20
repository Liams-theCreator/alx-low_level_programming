#include "main.h"

/**
 * cap_string - capitilizes all words of a string
 *
 * @s: pointer to string
 *
 * Return: string
 */

char *cap_string(char *s)
{
	char a[] = " \t\n!?();.,{}\"";
	int i, j;
	char L = 'a' - 'A';

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= L;

	for (i = 1; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])

				if (s[i + 1] >= 'a' && s[i + 1] <= 'z' && s[i + 1] != '\0')

					s[i + 1] -= L;
		}
	}
	return (s);
}
