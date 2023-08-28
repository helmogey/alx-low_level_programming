#include "lists.h"
/**
*pop_listint - start
*Description: 'print string'
*@head: sep
*Return: void
*/
int pop_listint(listint_t **head)
{
listint_t *current = (*head)->next;
int n = (*head)->n;

if (head == NULL)
{
return (0);
}
free(*head);
*head = current;
return (n);
}
