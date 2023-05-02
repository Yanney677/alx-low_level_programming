#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: head of the linked list
 *
 * Return: returns 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *tp;
int counter;

if (!*head || !head)
return (0);

counter = (*head)->n;
tp = (*head)->next;
free(*head);
*head = tp;

return (counter);
}

