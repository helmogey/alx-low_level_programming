#include "lists.h"
/**
*get_nodeint_at_index - start
*Description: 'print string'
*@head: sep
*@index: number
*Return: void
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
int len = 0;

while (head && len < index)
{
len++;
head = head->next;
}
if (head == NULL)
{
return (NULL);
}
return (head);
}
