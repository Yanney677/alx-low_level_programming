#include "hash_tables.h"

/**
 * key_index - Get the index of a key in the hash table array.
 * @key: The key to hash.
 * @size: The size of the array.
 *
 * Return: The index at which the key should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;

	if (key == NULL || size == 0)
		return (0);

	value = hash_djb2(key);
	return (value % size);
}
