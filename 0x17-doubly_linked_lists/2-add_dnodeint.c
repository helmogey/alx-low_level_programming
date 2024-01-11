#include "lists.h"
/**
 *add_dnodeint - doubly linked list
 *@head: input
 *@n: input
 *Description: doubly linked list node structure
 *Return: dlistint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *head_old, *new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = NULL;
head_old = *head;
if (head_old != NULL)
{
while (head_old->prev != NULL)
{head_old = head_old->prev;
}
}
new_node->next = head_old;
if (head_old != NULL)
{
head_old->prev = new_node;
}
*head = new_node;
return (new_node);
}
