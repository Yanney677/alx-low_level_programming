#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head pointer of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del_nodeA;
	dlistint_t *del_nodeB;
	unsigned int jack;

	del_nodeA = *head;

	if (del_nodeA != NULL)
		while (del_nodeA->prev != NULL)
			del_nodeA = del_nodeA->prev;

	jack = 0;

	while (del_nodeA != NULL)
	{
		if (jack == index)
		{
			if (jack == 0)
			{
				*head = del_nodeA->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				del_nodeB->next = del_nodeA->next;

				if (del_nodeA->next != NULL)
					del_nodeA->next->prev = del_nodeB;
			}

			free(del_nodeA);
			return (1);
		}
		del_nodeB = del_nodeA;
		del_nodeA = del_nodeA->next;
		jack++;
	}

	return (-1);
}
