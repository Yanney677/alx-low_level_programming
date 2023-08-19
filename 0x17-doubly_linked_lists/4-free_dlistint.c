#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: address to head of the list
 * Return: always 0 on success
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == 0)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
