#include "search_algos.h"

/**
 * exponential_search - looks for a value in an array
 * @array: pointer to first element of array
 * @size: number of elements in the array
 * @value: target
 * Return: idx of the target if found, -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t UB = 1, i = 1;

	if (!array || size == 0)
		return (-1);

	while (array[UB] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", UB, array[UB]);
		UB = _pow(2, i++);
		if (size - 1 < UB)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", UB / 2, UB);
	binSearch(array, value, UB, UB / 2);

	return (-1);
}

/**
 * _pow - elevate to power of 2 using bitwise
 * @a: number
 * @n: power
 * Return: a to the power of n
 */
size_t _pow(int a, int n)
{
	size_t result = 1;

	while (n > 0)
	{
		size_t last_bit = (n & 1);

		if (last_bit)
		{
			result = result * a;
		}
		a = a * a;
		n = n >> 1;
	}
	return (result);
}

/**
 * binSearch - rec search for value using binary
 * @array: pointer to first element of array
 * @value: target
 * @Ub: upper value
 * @Lb: lower value
 * Return: idx of the target if found, -1 otherwise
 */
int binSearch(int *array, int value, int Ub, int Lb)
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

	return (binSearch(array, value, Ub, Lb));
}
