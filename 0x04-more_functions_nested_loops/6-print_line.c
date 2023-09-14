#include "main.h"
/**
 * print_line - print straight line
 * @n : length of the line
 */

void print_line(int n)
{

	for (int i = 0; i < n; i++)
	{
		{
			_putchar('_');
		}
		if (n == 0 || n < 0)
		{
			_putchar('\n');
		}
	}
	putchar('\n');
}
