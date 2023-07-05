#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: head of the list
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *new_node;

	if (head != NULL)
	{
		new_node = *head;
		while ((ptr = new_node) != NULL)
		{
			new_node = new_node->next;
			free(ptr);
		}
		*head = NULL;
	}
}
