#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key in the hash table.
 * @ht: The hash table.
 * @key: The key to look up.
 *
 * Return: The value associated with the key, or NULL if key couldn't be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	if (ht == NULL || key == NULL || *key == 48)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	for (current_node = ht->array[index];
	     current_node && strcmp(current_node->key, key) != 0;
	     current_node = current_node->next)
		;
	if (current_node == NULL)
	{
		return (NULL);
	}
	else
	{
		return (current_node->value);
	}
}

