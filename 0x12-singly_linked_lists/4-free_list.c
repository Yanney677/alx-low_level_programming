#include "lists.h"
#include <stdlib.h>

/**
 * free_list -  frees a list_t list
 * @head: head of the list_t list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
