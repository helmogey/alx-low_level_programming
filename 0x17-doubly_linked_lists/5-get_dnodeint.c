#include "lists.h"
/**
 *get_dnodeint_at_index - doubly linked list
 *@head: input
 *@index: input
 *Description: doubly linked list node structure
 *Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;
dlistint_t *current = head;

while (current != NULL && count < index)
{
current = current->next;
count++;
}
if (current != NULL && count == index)
{
return (current);
}
else
{
return (NULL);
}
}
