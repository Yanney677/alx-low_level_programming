#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint_t list.
 * @head: head of the list
 * @index: index of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp;
	listint_t *next;

	temp = *head;

	if (index != 0)
	{
		for (; j < index - 1 && temp != NULL; j++)
		{
			temp = temp->next;
		}
	}

	if (temp == NULL || (temp->next == NULL && index != 0))
	{
		return (-1);
	}

	next = temp->next;

	if (index != 0)
	{
		temp->next = next->next;
		free(next);
	}
	else
	{
		free(temp);
		*head = next;
	}

	return (1);
}
