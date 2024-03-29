#include "lists.h"
/**
 *add_dnodeint_end - doubly linked list
 *@head: input
 *@n: input
 *Description: doubly linked list node structure
 *Return: size_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current, *new_node = malloc(sizeof(dlistint_t));
unsigned int i;

if (h == NULL)
return (NULL);
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;
if (idx == 0)
{
new_node->next = *h;
if (*h != NULL)
{
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}
}
current = *h;
for (i = 0; i < idx - 1; i++)
{
if (current == NULL)
{
free(new_node);
return (NULL);
}
current = current->next;
}
if (current == NULL)
{
free(new_node);
return (NULL);
}
new_node->prev = current;
new_node->next = current->next;
if (current->next != NULL)
{
current->next->prev = new_node;
}
current->next = new_node;
return (new_node);
}
