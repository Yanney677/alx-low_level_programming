#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of
 * a listint_t linked list.
 * @head: head of the list
 *
 * Return: sum of all the data(n) of a listint_t, otherwise
 * if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int add;

	add = 0;
	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
