#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr);
	}
}
