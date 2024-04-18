#include "search_algos.h"

/**
 * binary_search - looks for a value in an array using
 * binary search
 * @array: pointer to first element of array
 * @size: number of elements in the array
 * @value: target
 * Return: idx of the target if found, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int result;

	if (array == NULL)
		return (-1);

	result = recursive_bin_search(array, value, size - 1, 0);

	return (result);
}

/**
 * recursive_bin_search - rec search for value using binary
 * @array: pointer to first element of array
 * @value: target
 * @Ub: upper value
 * @Lb: lower value
 * Return: idx of the target if found, -1 otherwise
 */
int recursive_bin_search(int *array, int value, int Ub, int Lb)
{
	int half = Lb;
	int range;
	int i;

	printf("Searching in array: ");
	for (i = Lb; i < Ub; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	range = (Ub - Lb);
	half += (range % 2 == 0) ? range / 2 : (range - 1) / 2;

	if (value == array[half])
		return (half);
	if (Ub <= Lb)
		return (-1);

	if (value < array[half])
		Ub = half - 1;
	else
		Lb = half + 1;

	return (recursive_bin_search(array, value, Ub, Lb));
}
