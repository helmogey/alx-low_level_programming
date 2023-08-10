#include <stdlib.h>
/**
*_calloc - start
*Description: 'print string'
*@nmemb: first
*@size: second
*Return: Always 0 (Success)
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *n = malloc(nmemb * size);
unsigned int i;
char b = 0;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
if (n == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb * size; i++)
{
n[i] = b;
}
return (n);
}
