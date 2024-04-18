#include "../search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
	    0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int array2[] = {
	    0, 1, 2, 3, 4, 5, 6, 7, 8};

	size_t size = sizeof(array) / sizeof(array[0]);
	size_t size2 = sizeof(array2) / sizeof(array2[0]);

	printf("TESTING ARRAY1 ==================\n\n");
	printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
	printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
	printf("Found %d at index: %d\n\n", 999, binary_search(array, size, 999));
	printf("Found %d at index: %d\n\n", 9, binary_search(array, size, 9));
	printf("Found %d at index: %d\n\n", 7, binary_search(array, size, 7));
	printf("Found %d at index: %d\n\n", 6, binary_search(array, size, 6));
	printf("Found %d at index: %d\n\n", 4, binary_search(array, size, 4));
	printf("Found %d at index: %d\n\n", 3, binary_search(array, size, 3));
	printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
	printf("Found %d at index: %d\n\n", 1, binary_search(array, size, 1));

	printf("\n\nTESTING ARRAY2 ==================\n\n");
	printf("Found %d at index: %d\n\n", 8, binary_search(array2, size2, 8));
	printf("Found %d at index: %d\n\n", 7, binary_search(array2, size2, 7));
	printf("Found %d at index: %d\n\n", 6, binary_search(array2, size2, 6));
	printf("Found %d at index: %d\n\n", 5, binary_search(array2, size2, 5));
	printf("Found %d at index: %d\n\n", 4, binary_search(array2, size2, 4));
	printf("Found %d at index: %d\n\n", 3, binary_search(array2, size2, 3));
	printf("Found %d at index: %d\n\n", 2, binary_search(array2, size2, 2));
	printf("Found %d at index: %d\n\n", 1, binary_search(array2, size2, 1));
	printf("Found %d at index: %d\n\n", 0, binary_search(array2, size2, 0));

	return (EXIT_SUCCESS);
}
