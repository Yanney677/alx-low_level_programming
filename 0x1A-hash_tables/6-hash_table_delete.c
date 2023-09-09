#include "hash_tables.h"

/**
 * hash_table_delete - function that delete a hash table.
 * @ht: The hash_tabe.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j;
	hash_table_t *head = ht;
	hash_node_t *current_node, *tmp;

	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			current_node = ht->array[j];
			while (current_node != NULL)
			{
				tmp = current_node->next;
				free(current_node->key);
				free(current_node->value);
				free(current_node);
				current_node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
