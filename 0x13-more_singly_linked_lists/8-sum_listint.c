#include "lists.h"
/**
*sum_listint - start
*Description: 'print string'
*@head: sep
*Return: void
*/
int sum_listint(listint_t *head)
{
int res = 0;

if (head == NULL)
{
return (0);
}
while (head)
{
head = head->next;
res = res + head->n;
}
return (res);
}
