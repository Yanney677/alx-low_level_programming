#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * linked list.
 * @head: head of the list
 * @index: index of the node
 *
 * Return: nth node, If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	for (; j < index && head != NULL; j++)
	{
		head = head->next;
	}

	return (head);
}
