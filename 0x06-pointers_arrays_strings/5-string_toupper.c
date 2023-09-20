#include "main.h"

/**
 * string_toupper - convert string from lowercase to uppercase
 *
 * @str: pointer to string
 *
 * Return: uppercase string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}

	return (str);
}
