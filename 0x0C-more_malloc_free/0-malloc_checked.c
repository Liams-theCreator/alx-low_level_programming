#include "main.h"

/**
 * malloc_checked - allocating a block of memory
 *
 * @b: size
 *
 * Return: pointer to the allocated memory ,
 * if it fails exit with status value 98
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	if (b <= 0)
	{
		exit(98);
	}

	ptr = malloc(b * sizeof(int));

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
