#include "lists.h"
/**
*delete_nodeint_at_index - start
*Description: 'print string'
*@head: sep
*@index: number
*Return: void
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current = *head;
unsigned int len = 0;

if (*head == NULL || tmp == NULL)
{
return (-1);
}
while (current && len < index)
{
len++;
current = current->next;
}
current->next = (current->next)->next;
return (1);
}
