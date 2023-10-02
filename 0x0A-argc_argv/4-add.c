#include <stdio.h>

/**
 * main - printing the program's name
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: first index of argv
 */

int main(int argc, char argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
}
