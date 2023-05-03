#include "lists.h"

/**
 * reverse_listint - a function that reverses a linked list
 * @head: pointer to the linked list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *next = NULL;
listint_t *prev_node = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = prev_node;
prev_node = *head;
*head = next;
}
*head = prev_node;

return (*head);
}
