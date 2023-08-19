#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: address of head of the list
 * @index: index of the node, starting from 0
 * Return: nth node, otherwise null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n_node = 0;
	dlistint_t *ptr;

	if (head == NULL)
	return (NULL);

	ptr = head;
	while (ptr)
	{
		if (index == n_node)
		return (ptr);
		n_node++;
		ptr = ptr->next;
	}
	return (NULL);
}
