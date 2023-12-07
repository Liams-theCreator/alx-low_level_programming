#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 *
 * @h: Pointer to the head of the dlistint_t list.
 *
 * Return: The number of elements in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count)
}
