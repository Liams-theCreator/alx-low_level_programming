#include "variadic_functions.h"

/**
 * print_all - check the code.
 *
 * @format: A list of types of arguments passed to the function
 *
 * Return: void.
 */

void print_all(const char *const format, ...)
{
	unsigned int i = 0;
	va_list args;
	char *stri, *separator = "";

	va_start(args, format);
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", separator, va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(args, double));
			break;
		case 's':
			stri = va_arg(args, char *);
			if (stri == NULL)
			{
				printf("%s(nil)", separator);
			}
			else
			{
				printf("%s%s", separator, stri);
			}
			break;
		default:
			break;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
