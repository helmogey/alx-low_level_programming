#include "lists.h"
/**
*free_listint2 - start
*Description: 'print string'
*@head: sep
*Return: void
*/
void free_listint2(listint_t **head)
{
listint_t *current;

if (head == NULL)
{
return;
}
while (*head)
{
current = (*head)->next;
free(*head);
*head = current;
}
*head = NULL;
return;
}
