#include <stdlib.h>
/**
*_realloc - start
*Description: 'print string'
*@ptr: first
*@old_size: second
*@new_size: length
*Return: Always 0 (Success)
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
void *p;

if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
}
if (new_size > old_size)
{
p = malloc(new_size);
for (i = 0; i < old_size; i++)
{
p[i] = ptr[i];
}
return (p);
}
}
