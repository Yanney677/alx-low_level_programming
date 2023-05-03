#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index in a linked list
 * @head: pointer to the linked list
 * @index: index of the node to be deleted, starts at 0
 *
 * Return: 1 if it succeeded, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tp = *head;
listint_t *nodeDel = NULL;
unsigned int s = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(tp);
return (1);
}

while (s < index - 1)
{
if ((!tp->next) || !tp)
return (-1);

tp = tp->next;
s++;
}

nodeDel = tp->next;
tp->next = nodeDel->next;
free(nodeDel);

return (1);
}

