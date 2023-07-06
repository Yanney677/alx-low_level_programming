#include "lists.h"

/**
 * free_lists - frees a linked list.
 * @head: head of the list
 *
 * Return: void.
 */
void free_lists(listse_t **head)
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
 * print_listint_safe - prints a listint_t linked list.
 * @head: head of the list
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t mnnodes = 0;
	listse_t *head_ptr, *new, *sum;

	head_ptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listse_t));

		if (new == NULL)
			exit(98);

		new->s = (void *)head;
		new->next = head_ptr;
		head_ptr = new;

		sum = head_ptr;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (head == sum->s)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_lists(&head_ptr);
				return (mnnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		mnnodes++;
	}

	free_lists(&head_ptr);
	return (mnnodes);
}
