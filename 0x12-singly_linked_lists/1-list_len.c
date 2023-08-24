#include <stdio.h>
#include "lists.h"
/**
*list_len - start
*Description: 'print string'
*@h: sep
*Return: void
*/
size_t list_len(const list_t *h)
{
size_t num;

while (h)
{
num++;
h = h->next;
}
return (num);
}
