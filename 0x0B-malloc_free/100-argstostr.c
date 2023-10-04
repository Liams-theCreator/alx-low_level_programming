#include "main.h"

/**
 * argstostr - function concat a string passed as program arguments.
 *
 * @ac: the argument count.
 * @av: the vector argument.
 * Return: contat string on the heap.
 */

char *argstostr(int ac, char **av)
{
	char *buffer;
	int i, j, k, size = 0;

	if (!ac || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			size++;
		}
		size++;
	}

	buffer = (char *)malloc(sizeof(char) * (size + 1));
	if (!buffer)
		return (NULL);

	k = 0;
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			buffer[k] = av[i][j];
			k++;
		}
		buffer[k] = '\n';
		k++;
	}

	buffer[k] = '\0';
	return (buffer);
}
