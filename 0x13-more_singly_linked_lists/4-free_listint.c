#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temporary;

	while (head != NULL)
	{
		temporary = head;
		head = head->temporary;
		free(temporary);
	}
}
