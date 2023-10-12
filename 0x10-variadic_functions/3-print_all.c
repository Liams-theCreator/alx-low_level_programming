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
	int i = 0;
	char *stri, *separator = "";
	va_list args;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		separator = "";
		switch (format[i])
		{
		case 'i':
			printf("%d", va_arg(args, int));
			separator = ", ";
			break;
		case 'c':
			printf("%c", va_arg(args, int));
			separator = ", ";
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			separator = ", ";
			break;
		case 's':
			stri = va_arg(args, char *);
			separator = ", ";
			if (stri == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", stri);
			break;
		}
		i++;
		if (format[i] != '\0')
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
