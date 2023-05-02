#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a linked list.
 * @head: head of the linked list
 * @index: is the index of the node, starting at 0
 *
 * Return: returns a void pointer, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a = 0;
listint_t *tp = head;

while (tp && a < index)
{
tp = tp->next;
a++;
}

return (tp ? tp : NULL);
}

