#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the headstructure
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *local_head;
	size_t n_element = 0;

	local_head = h;
	while (local_head != NULL)
	{
		if (!local_head->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", local_head->len, local_head->str);
		n_element++;
		local_head = local_head->next;
	}
	return (n_element);
}
