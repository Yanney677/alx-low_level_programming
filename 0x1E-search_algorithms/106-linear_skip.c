#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted linked list with an
 * express lane using a linear search.
 * @list: The pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: The node with the value in the linked list, otherwise NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	size_t i, jump_step, x = 0, y = 0;
	skiplist_t *node, *next;

	if (!list)
		return (NULL);
	node = list;
	next = node->express ? node->express : node;
	while (next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)next->index, next->n);
		if (next->n >= value)
			break;
		node = next;
		if ((node->n < value) && (node->express == NULL))
		{
			while (next->next)
				next = next->next;
			break;
		}
		next = node->express ? node->express : node;
	}
	x = node->index;
	y = next->index;
	printf("Value found between indexes [%d] and [%d]\n", (int)x, (int)y);
	while (node)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}
	return (NULL);
}
