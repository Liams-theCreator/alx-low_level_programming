#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Pointer to a pointer to the head of the list.
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temporary = *head;
		*head = (*head)->next;
		free(temporary);
	}
}
