#include "lists.h"
/**
*add_nodeint - start
*Description: 'print string'
*@head: sep
*@n: int
*Return: void
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *first;

first = malloc(sizeof(listint_t));
if (first == NULL)
{
return (NULL);
}
first->n = n;
first->next = *head;
*head = first;
return (*head);
}
