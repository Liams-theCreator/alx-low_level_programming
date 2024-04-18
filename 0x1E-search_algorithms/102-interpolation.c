#include "search_algos.h"

/**
 * interpolation_search - looks for a value in an array
 * @array: pointer to first element of array
 * @size: number of elements in the array
 * @value: target
 * Return: idx of the target if found, -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, LB, UB;

	if (!array || size == 0)
		return (-1);

	for (LB = 0, UB = size - 1; UB >= LB;)
	{
		i = LB;
		i += (((double)(UB - LB) / (array[UB] - array[LB])) * (value - array[LB]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			UB = i - 1;
		else
			LB = i + 1;
	}
	return (-1);
}
