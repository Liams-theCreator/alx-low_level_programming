#include "main.h"

/**
 * print_array - printing elements of array
 *
 * @a: pointer to first index of array
 * @n: length of array
 *
 */

void print_array(int *a, int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
