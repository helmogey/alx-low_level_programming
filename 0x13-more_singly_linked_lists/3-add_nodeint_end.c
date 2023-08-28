#include "lists.h"
/**
*add_nodeint_end - start
*Description: 'print string'
*@head: sep
*@n: int
*Return: void
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *last;
listint_t current = *head;

last = malloc(sizeof(listint_t));
if (last == NULL)
{
return (NULL);
}
last->n = n;
last->next = NULL;
while (current->next)
{
current = current->next;
}
current->next = last;
return (last);
}
