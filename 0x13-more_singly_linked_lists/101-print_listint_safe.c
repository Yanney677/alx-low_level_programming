#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - finds the length of the node in the linked list
 * @head: pointer to the linked list
 *
 * Return: the number of nodes in the list, if the function fails then
 * exit the program and return 98
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *t, *h;
size_t nodeA = 1;

if (head == NULL || head->next == NULL)
return (0);

t = head->next;
h = (head->next)->next;

while (h)
{
if (t == h)
{
t = head;
while (t != h)
{
nodeA++;
t = t->next;
h = h->next;
}

t = t->next;
while (t != h)
{
nodeA++;
t = t->next;
}

return (nodeA);
}

t = t->next;
h = (h->next)->next;
}

return (0);
}

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the linked list
 *
 * Return: resulting sum
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodeA, count = 0;

nodeA = looped_listint_len(head);

if (nodeA == 0)
{
for (; head != NULL; nodeA++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (count = 0; count < nodeA; count++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (nodeA);
}


