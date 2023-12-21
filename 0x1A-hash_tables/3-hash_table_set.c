#include "hash_tables.h"

/**
 * hash_table_set - adds element to the hash table
 * @ht: pointer to hash table
 * @key: key string
 * @value: value asociated with the key
 * Return: 1 if succeded, 0 if failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index(key, ht->size);
	hash_node_t *node = ht->array[index];

	if (!ht || !key || !key[0])
	{
		return (0);
	}
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);

	return (1);
}
