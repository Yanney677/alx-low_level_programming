#include "lists.h"

/**
 * add_nodeint_end - inserting a node at the end of a linked list
 * @head: the head of the linked list
 * @n: the number of node to insert at the end of the linked list
 *
 * Return: the address of the new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode;
listint_t *temp = *head;

newnode = malloc(sizeof(listint_t));
if (!newnode)
return (NULL);

newnode->n = n;
newnode->next = NULL;

if (*head == NULL)
{
*head = newnode;
return (newnode);
}

while (temp->next)
temp = temp->next;

temp->next = newnode;

return (newnode);
}

