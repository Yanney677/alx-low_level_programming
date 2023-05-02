#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: the head or the pointer to be freed in the linked list
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}
}

