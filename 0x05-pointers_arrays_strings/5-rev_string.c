#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: char
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		i--;
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
	}
}
