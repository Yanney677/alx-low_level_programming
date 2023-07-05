#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a listint_t list.
 * @head: head of the list
 *
 * Return: head node's data(n).
 */
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *j;
	listint_t *ptr;

	if (*head == NULL)
		return (0);

	ptr = *head;

	head_node = ptr->n;

	j = ptr->next;

	free(ptr);

	*head = j;

	return (head_node);
}
