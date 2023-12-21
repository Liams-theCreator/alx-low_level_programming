#include "hash_tables.h"

/**
 * hash_table_set - adds element to the hash table
 * @ht: pointer to hash table
 * @key: key string
 * @value: value associated with the key
 * Return: 1 if succeeded, 0 if failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key || !key[0])
	{
		return (0);
	}

	index = key_index((unsigned char *)key, ht->size); /* neccessary to cast !?*/
	node = ht->array[index];
	while (node) /* klimogin check if key found update it*/
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	node = malloc(sizeof(hash_table_t));
	if (node == NULL)
	{
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);

	node->next = ht->array[index]; /* to biginin */
	ht->array[index] = node;

	return (1);
}
