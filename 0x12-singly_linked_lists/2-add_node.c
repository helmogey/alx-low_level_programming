#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*add_node - start
*Description: 'print string'
*@head: sep
*@str: sec
*Return: void
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *first;
unsigned int len = 0;

while (str[len])
{
len++;
}
first = malloc(sizeof(list_t));
if (first == NULL)
{
return (NULL);
}
first->str = strdup(str);
first->len = len;
first->next = *head;
*head = first;
return (*head);
}
