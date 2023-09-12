#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * return : 0
 */
void print_alphabet_x10(void)
{

	char x;
	int n = 0;

	while (n <= 9)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			putchar(x);
		}
		putchar('\n');
		n++;
	}
}
