#include "lists.h"

/**
 * free_listint2 - a function that frees the linked list
 * @head: the head of the linked list to be freed
 */
void free_listint2(listint_t **head)
{
listint_t *Tp;

if (head == NULL)
return;

while (*head)
{
Tp = (*head)->next;
free(*head);
*head = Tp;
}
*head = NULL;
}

