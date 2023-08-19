#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head pointer of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num_node = 0;

	if (h == NULL)
		return (num_node);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_node++;
		h = h->next;
	}

	return (num_node);
}
