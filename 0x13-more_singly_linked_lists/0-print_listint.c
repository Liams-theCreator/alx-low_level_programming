#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 *
 * @h: pointer to node
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint *current = h;
	size_t i = 0;

	for (; current != NULL; current = current->next)
	{
		printf("%d\n", current->n);
		i++;
	}
	return (i);
}
