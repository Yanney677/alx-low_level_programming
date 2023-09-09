#include "hash_tables.h"

/**
 * hash_table_print - Fucntion to print a hash table.
 * @ht: The hash_table.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *curr_node;
	bool first_pair = false;

	if (ht == NULL)
		return;

	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			if (first_pair == true)
				printf(", ");

			for (curr_node = ht->array[j]; curr_node != NULL;
				first_pair = true)
			{
				printf("'%s': '%s'", curr_node->key,
				       curr_node->value);
				curr_node = curr_node->next;
				if (curr_node != NULL)
					printf(", ");
			}
		}
	}
	printf("}\n");
}
