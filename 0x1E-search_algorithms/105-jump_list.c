#include <math.h>
#include "search_algos.h"

/**
 * get_n_next - Gets the nth node next to a given node.
 * @node: Starting node.
 * @n: The number of positions next to the node.
 *
 * Return: The node n places next to the given node,
 * otherwise the last node or NULL.
 */
listint_t *get_n_next(listint_t *node, size_t n)
{
	size_t j = 0;
	listint_t *net = NULL;

	net = node;
	for (j = 0; (j < n) && (nex) && (net->next); j++)
		nex = net->next;
	return (net);
}

/**
 * jump_list - Searches for a value in a sorted linked list using a jump search.
 * @list: The pointer to the head of the list to search in.
 * @size: The number of node in the linked list.
 * @value: The value to search for.
 *
 * Return: The node with the value in the linked list, otherwise NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_step, x = 0, y = 0;
	listint_t *node, *next;

	if (!list)
		return (NULL);
	jump_step = (size_t)sqrt(size);
	node = list;
	next = get_n_next(node, step);
	while (node)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)next->index, next->n);
		if ((next->n >= value) || (!next->next))
			break;
		node = next;
		next = get_n_next(node, jump_step);
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
