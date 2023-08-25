#include <stdlib.h>
#include "lists.h"
/**
*free_list - start
*Description: 'print string'
*@head: sep
*Return: void
*/
void free_list(list_t *head)
{
list_t *current = *head;

while (head != NULL)
{
current = head->next;
free(head);
head = current;
}
return;
}
