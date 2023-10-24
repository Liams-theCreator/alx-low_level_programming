#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of a linked list.
 *
 * @head: A pointer to the head of the linked list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: A pointer to the newly created node or
 * NULL if memory allocation fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current = *head;

	current = malloc(sizeof(listint_t));

	if (current == NULL)
	{
		return (NULL);
	}

	current->n = n;
	current->next = *head;
	*head = current;

	return (current);
}
