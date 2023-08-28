#include "lists.h"
/**
*sum_listint - start
*Description: 'print string'
*@head: sep
*Return: void
*/
int sum_listint(listint_t *head)
{
if (head == NULL)
{
return (0);
}
int res = 0;

while (head)
{
res = res + *(head)->n;
}
return (res);
}
