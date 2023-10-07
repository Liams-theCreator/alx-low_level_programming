#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to char
 * @b: constant byte
 * @n: bytes of memory area
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - Allocates memory for an array, initializing it to zero.
 *
 * @nmemb: Number of elements in the array.
 * @size: Size in bytes of each element.
 *
 * Return: A pointer to the allocated memory. NULL if nmemb or size is 0, or if
 *         malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int THAsize;
	char *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	THAsize = nmemb * size;

	mem = malloc(THAsize);
	if (mem == NULL)
	{
		return (NULL);
	}
	_memset(mem, 0, THAsize);
	return (mem);
}

/**
 * array_range - Creates an array of integers from min to max.
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: A pointer to the newly created array. NULL if min > max or if
 *         malloc fails.
 */

int *array_range(int min, int max)
{
	int *arr, ts, i = 0;

	if (min > max)
	{
		return (NULL);
	}

	ts = max - min;

	arr = (int *)_calloc(ts + 1, sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (; i <= ts; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
