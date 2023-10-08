#include "main.h"

/**
 * _realloc - Reallocates a memory block.
 * @ptr: Pointer to the memory block to be reallocated.
 * @old_size: Size of the current memory block.
 * @new_size: Size of the new memory block.
 *
 * Return: On success, returns a pointer to the reallocated memory block.
 *         If new_size is zero and ptr is not NULL, frees ptr and returns NULL.
 *         If ptr is NULL, equivalent to malloc(new_size).
 *         If new_size is equal to old_size, returns the original pointer.
 *         On failure to allocate, returns NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *re_ptr;
	unsigned int minsize, i = 0;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	re_ptr = malloc(new_size);
	if (re_ptr == NULL)
	{
		return (NULL);
	}
	if (old_size < new_size)
	{
		minsize = old_size;
	}
	else
	{
		minsize = new_size;
	}
	for (; i < minsize; i++)
	{
		((char *)re_ptr)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (re_ptr);
}
