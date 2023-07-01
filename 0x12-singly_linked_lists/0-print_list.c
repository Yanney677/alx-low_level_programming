#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list_t to print the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodeA = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0](nill)\n");
		else
			printf("[%u]%s\n", h->len, h->str);
		h = h->next;
		nodeA++;
	}

	return (nodeA);
}
