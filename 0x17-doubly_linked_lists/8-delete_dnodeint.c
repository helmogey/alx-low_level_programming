#include "lists.h"
/**
 *delete_dnodeint_at_index - doubly linked list
 *@head: input
 *@index: input
 *Description: doubly linked list node structure
 *Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *temp;
unsigned int i;

if (head == NULL || *head == NULL)
{
return (-1);
}
if (index == 0)
{
temp = *head;
*head = (*head)->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
free(temp);
return 1;
}
current = *head;
for (i = 0; i < index; i++)
{
if (current == NULL)
{
return (-1);
}
current = current->next;
}
if (current == NULL)
{
return -1;
}
if (current->prev != NULL)
{
current->prev->next = current->next;
}
if (current->next != NULL)
{
current->next->prev = current->prev;
}
free(current);
return (1); 
}
