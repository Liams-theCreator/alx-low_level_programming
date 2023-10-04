#include "main.h"

/**
 * alloc_grid - allocate 2d array on the heap.
 *
 * @height: height of the array.
 * @width: width of the array.
 *
 * Return: pointer to a 2d array , null if it fails
 */

int **alloc_grid(int width, int height)
{
	int **multarray, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	multarray = malloc(sizeof(int *) * height);
	if (multarray == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		multarray[i] = malloc(sizeof(int) * width);
		if (multarray[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(multarray[j]);
			}
			free(multarray);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			multarray[i][j] = 0;
		}
	}

	return (multarray);
}
