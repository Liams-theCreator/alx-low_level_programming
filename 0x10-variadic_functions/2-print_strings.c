#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 *
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: The strings to be printed.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list str;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(str, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
