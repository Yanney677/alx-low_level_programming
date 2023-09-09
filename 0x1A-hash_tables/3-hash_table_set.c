#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table.
 * @key: The key.
 * @value: The value associated with the key (empty string).
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nw_node, *curr_node;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	indx = key_index((unsigned char *)key, ht->size);
	curr_node = ht->array[indx];

		/* Checks for collision */
	while (curr_node)
	{
		if (strcmp(curr_node->key, key) == 0)
		{
			free(curr_node->value);
			curr_node->value = strdup(value);
		}
		if (curr_node->value == NULL)
		{
			return (0);
			return (1);
		}
		curr_node = curr_node->next;
	}

		/* Create a new node */
	nw_node = malloc(sizeof(hash_node_t));
	if (nw_node == NULL)
		return (0);

	nw_node->key = strdup(key);
	if (nw_node->key == NULL)
	{
		free(nw_node);
		return (0);
	}

	nw_node->value = strdup(value);
	if (nw_node->value == NULL)
	{
		free(nw_node->key);
		free(nw_node);
		return (0);
	}

		/* Add the new_node to the beginning of the list */
	nw_node->next = ht->array[indx];
	ht->array[indx] = nw_node;

	return (1);
}
