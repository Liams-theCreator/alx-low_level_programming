#include <unistd.h>

/**
 * _putchar - prints the character c
 *
 * Return: if success 1
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
