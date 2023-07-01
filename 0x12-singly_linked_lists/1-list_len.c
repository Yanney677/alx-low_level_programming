#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns then number of elements in a list.
 * @h: pointer to the list_t in the list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nodeA = 0;

	for (; h != NULL ; nodeA++)
	{
		h = h->next;
	}

	return (nodeA);

}
