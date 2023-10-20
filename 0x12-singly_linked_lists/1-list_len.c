#include "lists.h"

/**
 * list_len - Counts the number of nodes in a linked list.
 *
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	for (; h != NULL; h = h->next)
	{
		len++;
	}

	return (len);
}
