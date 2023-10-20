#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list
 *
 * @head: Pointer to the pointer of the head of the linked list
 * @str: String to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_node;
	}

	return new_node;
}
