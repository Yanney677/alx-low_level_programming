#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to head of  the list_t list
 * @str: string to be added to the node in the list_t list
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t mncha;


	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (mncha = 0; str[mncha]; mncha++)
		;

	new_node->len = mncha;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
