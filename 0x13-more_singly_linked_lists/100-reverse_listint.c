#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list.
 * @head: head of the list
 *
 * Return: a pointer to the first node of
 * the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv;
	listint_t *nt;

	prv = NULL;
	nt = NULL;

	while (*head != NULL)
	{
		nt = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = nt;
	}

	*head = prv;
	return (*head);
}
