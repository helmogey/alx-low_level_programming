#include <stdio.h>
#include "main.h"
/**
*print_list - start
*Description: 'print string'
*@h: sep
*Return: void
*/
size_t print_list(const list_t *h)
{
size_t num = 0;

while (h)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
num++;
h = h->next'
}
return (num);
}
