#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning
 * of a linked list
 * @head: the head of the linked list
 * @n: the newnode added to the linked list by user input
 *
 * Return: the address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;

newnode = malloc(sizeof(listint_t));
if (!newnode)
return (NULL);

newnode->n = n;
newnode->next = *head;
*head = newnode;

return (newnode);
}

