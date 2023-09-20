#include "main.h"

/**
 * rot13 - encodes string using rot13
 *
 * @s: pointer to string
 *
 * Return: string
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i])
	{
		while ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90))
		{
			if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			{
				s[i] -= 13;
				i++;
				continue;
			}
			s[i] += 13;
			i++;
		}
		i++;
	}
	return (s);
}
