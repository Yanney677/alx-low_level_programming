#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: head of the list_t list
 * @str: string to add in the list_t list
 *
 * Return: address of the head, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *ptr = *head;
	size_t mncha;


	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (mncha = 0; str[mncha]; mncha++)
		;

	new->len = mncha;
	new->next = NULL;

	if (ptr == NULL)
	{
		*head = new;
	}

	else
	{

		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = new;
	}

	return (*head);
}

