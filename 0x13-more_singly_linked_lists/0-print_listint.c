#include "lists.h"

/**
 * print_listint - print all elements of a list
 *
 * @h: pointer to node
 *
 * Return: number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *current;

	current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
