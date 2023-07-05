#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a listint_t list.
 * @head: head of the list
 * @n: new element of the list
 *
 * Return: address of the new element, or  NUll if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *ptr;

	(void)ptr;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	ptr = *head;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
	}

	return (*head);
}
