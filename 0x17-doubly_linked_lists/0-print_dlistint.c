#include "lists.h"
/**
 *print_dlistint - doubly linked list
 *@h: input
 *Description: doubly linked list node structure
 *Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
int node_count = 0;

while (h != NULL)
{
h = h->next;
node_count++;
}
return (node_count);
}
