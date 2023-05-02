#include "lists.h"

/**
 * listint_len - counts the number of node in a linked lists
 * @h: the head of the linked lists
 *
 * Return: the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h)
{
count++;
h = h->next;
}
return (count);
}

