#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *temporary = *head;

	if (*head == NULL)
	{
		return (0);
	}

	int data = temporary->n;

	*head = (*head)->next;
	free(temporary);

	return (data);
}