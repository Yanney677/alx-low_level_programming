#include "lists.h"

/**
 * sum_listint - the sum of all the  nth data in a linked list
 * @head: pointer to the linked list
 *
 * Return: resulting integer
 */
int sum_listint(listint_t *head)
{
listint_t *tp = head;
int sum_total = 0;
while (tp)
{
sum_total += tp->n;
tp = tp->next;
}

return (sum_total);
}

