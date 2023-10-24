#include "lists.h"

/**
 * sum_listint - Computes the sum of all integers in a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The sum of all integers in the linked list.
 *         If the list is empty, returns 0.
 */

int sum_listint(listint_t *head)
{
	int result = 0;

	for (; head != NULL; head = head->next)
	{
		result += head->n;
	}
	return (result);
}
