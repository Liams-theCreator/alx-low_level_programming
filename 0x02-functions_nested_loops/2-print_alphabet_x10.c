#include "main.h"
/**
 * Entry point
 *
 * return : 0
 */
void print_alphabet_x10(void)
{

	int x;
	int n = 1;
	while (x <= 10)
	{
		for (x = 'a'; x < 'z'; x++)
		{
			putchar(x);
		}
	}

	putchar('\n');
}