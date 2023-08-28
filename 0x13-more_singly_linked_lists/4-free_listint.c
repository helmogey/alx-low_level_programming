#include "lists.h"
/**
*free_listint - start
*Description: 'print string'
*@head: sep
*Return: void
*/
void free_listint(listint_t *head)
{
listint_t *current;
while (head)
{
current = head->next;
free(head);
head = current;
}
return;
}
