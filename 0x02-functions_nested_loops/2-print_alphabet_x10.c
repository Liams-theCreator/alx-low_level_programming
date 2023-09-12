#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * return : 0
 */
void print_alphabet_x10(void)
{

	int x;
	while (x <= 10)
	{
		for (x = 'a'; x < 'z'; x++)
		{
			putchar(x);
		}
	}

	putchar('\n');
}