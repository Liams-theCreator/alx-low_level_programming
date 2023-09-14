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
			putchar('_');
		}
		if (n == 0 || n < 0)
		{
			putchar('\n');
		}
	}
	putchar('\n');
}
