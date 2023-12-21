#include "hash_tables.h"

/*
 * hash_table_create - Create a hash table.
 * @size: Size of the array in the hash table.
 *
 * Return: A pointer to the newly created hash table,
 *         or NULL if an error occurs.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tableau = NULL;

	if (size == 0)
	{
		return (NULL);
	}

	tableau = malloc(sizeof(hash_table_t));
	if (tableau == NULL)
	{
		return (NULL);
	}

	tableau->size = size;
	tableau->array = calloc(size, sizeof(hash_node_t *));
	if (tableau->array == NULL)
	{
		free(tableau);
		return (NULL);
	}
	return (tableau);
}
