#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t
 * linked list and returns its data.
 *
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The data (n) of the deleted head node,
 *  or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temporary = *head;
	int data = temporary->n;

	if (*head == NULL)
	{
		return (0);
	}

	*head = (*head)->next;
	free(temporary);

	return (data);
}
