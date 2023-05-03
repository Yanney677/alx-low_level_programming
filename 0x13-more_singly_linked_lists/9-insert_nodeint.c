#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * in a linked list
 * @head: pointer the linked list
 * @idx: the index of the list where new node is added, index starts 0
 * @n: is the new node to be inserted
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node;
listint_t *tp = *head;
unsigned int z;

new_node = malloc(sizeof(listint_t));
if (!head || !new_node)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

for (z = 0; tp && z < idx; z++)
{
if (z == idx - 1)
{
new_node->next = tp->next;
tp->next = new_node;
return (new_node);
}
else
tp = tp->next;
}

return (NULL);
}

