#include "lists.h"
/**
*reverse_listint - start
*Description: 'print string'
*@head: sep
*Return: void
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous = NULL;
listint_t *current = (*head)->next;
listint_t *nextNode = NULL;

while (current != NULL)
{
nextNode = current->next;
current->next = previous;
previous = current;
current = nextNode;
}
(*head)->next = previous;
return (*head);
}
