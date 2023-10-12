#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: The strings to be printed.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strings;
	va_list stri;

	va_start(stri, n);
	for (i = 0; i < n; i++)
	{
		stri = va_arg(strings, *char);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", strings);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(stri);
}
