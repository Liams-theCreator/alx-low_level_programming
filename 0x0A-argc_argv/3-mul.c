#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: result of multiplication , if it's an error print "Error"
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1, num2, result;

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;

		printf("%d\n", result);
	}

	return 0;
}
