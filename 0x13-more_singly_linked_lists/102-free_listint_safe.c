#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the linked list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *tp;
int ptr;

if (!*h || !h)
return (0);

while (*h)
{
ptr = *h - (*h)->next;
if (ptr > 0)
{
tp = (*h)->next;
free(*h);
*h = tp;
count++;
}
else
{
free(*h);
*h = NULL;
count++;
break;
}
}

*h = NULL;

return (count);
}

