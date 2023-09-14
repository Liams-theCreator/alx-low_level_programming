#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n : length of the line
 */

void print_diagonal(int n)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
