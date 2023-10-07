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
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
