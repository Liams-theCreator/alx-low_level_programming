#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: Pointer to a binary string containing '0' and '1' characters.
 *
 * Return: The converted number, or 0 if there is one or more characters in the
 *         string 'b' that are not '0' or '1', or if 'b' is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int result = 0;
	int i = 0;

	if (b == NULL)
	{
		return (NULL);
	}

	for (; b[i] != NULL; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else
		{
			result = (b[i] << 1) + (b[i] - '0');
		}
	}
	return (result);
}
