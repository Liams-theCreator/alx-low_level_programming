#include "lists.h"

/**
 * free_list - Frees a linked list and its strings.
 * @head: Pointer to the head of the linked list.
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
