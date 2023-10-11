#include "function_pointers.h"

/**
 * int_index - index of the function
 *
 * @array: array of function
 * @cmp: function pointer comparison
 * @size: size of the array
 *
 * Return: Index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i = 0;

	if (array == NULL || cmp == NULL || size == 0)
	{
		return (-1);
	}
	for (; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}
}
