#include "main.h"

/**
 * reverse_array - reverse the content of an array
 *
 * @a: pointer to array
 * @n: length of array
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;
	int j = n - 1;

	for (; i < j; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
