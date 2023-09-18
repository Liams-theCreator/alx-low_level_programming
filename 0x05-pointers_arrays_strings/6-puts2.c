#include "main.h"

/**
 * puts2 - print every other character
 *
 * @str: pointer to char
 */

void puts2(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
