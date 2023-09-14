#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14
 */

void more_numbers(void)
{
	int j, i;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i <= 9)
			{
				_putchar('0' + i);
			}
			else if (i > 9)
			{
				_putchar('1');
				_putchar('0' + (i - 10));
			}
		}
		_putchar('\n');
	}
}
