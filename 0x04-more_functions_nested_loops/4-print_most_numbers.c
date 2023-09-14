#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9 except 2 and 4
 */

void print_most_numbers(void)
{

	for (int i = 0; i < 9; i++)
	{
		if (i != 2 && i != 4)
		{
			putchar('0' + i);
		}
	}

	putchar('\n');
}
