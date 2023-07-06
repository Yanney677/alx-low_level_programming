#include "lists.h"

/**
 * free_lists1 - frees a linked list.
 * @head: head of the list
 *
 * Return: void.
 */
void free_lists1(listse_t **head)
{
	listse_t *ptr;
	listse_t *new_node;

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

/**
 * free_listint_safe - frees a listint_t list.
 * @h: head of the list
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t mnnodes = 0;
	listse_t *head_ptr, *new, *sum;
	listint_t *current;

	head_ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listse_t));

		if (new == NULL)
			exit(98);

		new->s = (void *)*h;
		new->next = head_ptr;
		head_ptr = new;

		sum = head_ptr;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (*h == sum->s)
			{
				*h = NULL;
				free_lists1(&head_ptr);
				return (mnnodes);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		mnnodes++;
	}

	*h = NULL;
	free_lists1(&head_ptr);
	return (mnnodes);
}
