#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: Hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i = 0, size = ht->size;
	int fasila = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (; i < size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (fasila != 0)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			fasila = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
