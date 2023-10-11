#include "function_pointers.h"

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
