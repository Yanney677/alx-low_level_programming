#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the linked list
 *
 * Return: the address of the node where the loop starts, or NULL
 * if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *ending = head;
listint_t *begining = head;

if (!head)
return (NULL);

while (begining && ending && ending->next)
{
ending = ending->next->next;
begining = begining->next;
if (ending == begining)
{
begining = head;
while (begining != ending)
{
begining = begining->next;
ending = ending->next;
}
return (ending);
}
}

return (NULL);
}

