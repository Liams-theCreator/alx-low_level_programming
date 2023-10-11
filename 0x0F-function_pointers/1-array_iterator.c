#include "function_pointers.h"

/**
 * array_iterator - iterator function for array elements
 *
 * @array: pointer to array
 * @size: size of the array
 * @action: function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array == NULL || action == NULL)
	{
		return;
		for (; i < size_t; i++)
		{
			action(array[i]);
		}
	}
}
