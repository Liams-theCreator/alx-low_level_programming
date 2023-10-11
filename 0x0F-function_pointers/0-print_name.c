#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: pointer to the name
 * @f: pointer to the function that print the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		f(name);
	}
}
