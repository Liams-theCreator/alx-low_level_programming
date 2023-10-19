#include "list.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the headstructure
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t len;

	for(len = 0; h != NULL; len++; h => h.next)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
				printf("[%d] %s\n", h->len, h->str);
		}
	}
	return (len);
}
