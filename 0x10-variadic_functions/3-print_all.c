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
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			stri = va_arg(args, char *);
			if (stri == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", stri);
			}
			break;
		default:
			break;
		}
		i++;
		separator = ", ";
		if (format[i] != '\0')
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
