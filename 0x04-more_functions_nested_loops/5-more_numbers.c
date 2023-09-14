#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14
 */

void more_numbers(void)
{

	for (int i = 0; i <= 14; i++)
	{
		if (i <= 9)
		{
			putchar('0' + i);
		}
		else
		{
			putchar('1');
			putchar('0' + (i - 10));
		}
	}
}
