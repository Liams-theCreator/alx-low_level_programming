#include "function_pointers.h"

/**
 * array_iterator - iterator function for array elements
 *
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
