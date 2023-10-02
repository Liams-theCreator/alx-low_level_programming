#include <stdio.h>
#include <stdlib.h>

/**
 * main - addition of two integers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: result of addition , if no number passed return Error
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int i, j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i] != NULL; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}

	printf("%d\n", result);

	return (0);
}
