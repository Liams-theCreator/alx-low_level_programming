#include "main.h"

/**
 * _atoi - convert from ascii to integer
 * @s: pointer to char
 *
 * Return: integer
 */

int _atoi(char *s)
{

	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t')
		{
			i++;
		}

		if (s[i] == '-')
		{
			sign = -1;
			i++;
		}
		else if (s[i] == '+')
		{
			sign = 1;
			i++;
		}

		while (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0'); // Corrected the conversion
			i++;
		}
	}
	return sign * result;
}
