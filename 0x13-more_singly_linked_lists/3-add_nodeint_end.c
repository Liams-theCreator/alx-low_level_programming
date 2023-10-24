#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a linked list.
 *
 * @head: A pointer to the head of the linked list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: A pointer to the newly created node or NULL
 * if memory allocation fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *last;

	last = malloc(sizeof(listint_t));

	if (last == NULL)
	{
		return (NULL);
	}

	last->n = n;
	last->next = NULL;

	if (*head == NULL)
	{
		*head = last;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = last;
	}
}
