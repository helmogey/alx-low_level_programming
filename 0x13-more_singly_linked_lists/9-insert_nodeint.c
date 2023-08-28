#include "lists.h"
/**
*insert_nodeint_at_index - start
*Description: 'print string'
*@head: sep
*@idx: place to add
*@n: number
*Return: void
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current, *tmp;
unsigned int len = 0;

tmp = malloc(sizeof(listint_t));
if (tmp == NULL)
{
return (NULL);
}
tmp->n = n;
if (*head == NULL)
{
tmp->next = NULL;
*head = tmp;
return (tmp);
}
while (head && len < idx)
{
len++;
head = head->next;
}
if (head == NULL)
{
return (NULL);
}
current = head;
tmp->next = current->next;
head = tmp;
return (tmp);
}

