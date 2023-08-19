#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head pointer to the linked list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num_node = 0;

	if (h == NULL)
		return (num_node);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		num_node++;
		h = h->next;
	}

	return (num_node);
}
