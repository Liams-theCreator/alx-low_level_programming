#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: The key
 * @size: The size of the array of the hash table
 * Return: pointer to the newly created hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index;

	index = hash_djb2(key) % size;
	return (index);
}
