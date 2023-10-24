#include "lists.h"

/**
 * listint_len - Returns the number of elemnets of list
 *
 * @h: the head of the list
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
