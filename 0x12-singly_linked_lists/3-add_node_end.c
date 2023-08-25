#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*add_node_end - start
*Description: 'print string'
*@head: sep
*@str: string
*Return: void
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *last;
unsigned int len = 0;
list_t *current = *head;

while (str[len])
{
len++;
}
last = malloc(sizeof(list_t));
if (last == NULL)
{
return (NULL);
}
last->str = strdup(str);
last->len = len;
last->next = NULL;
if (*head == NULL)
{
*head = last;
return (last);
}
while (current->next)
{
current = current->next;
}
current->next = last;
return (last);
}
