#include <stdlib.h>
/**
*malloc_checked - start
*Description: 'print string'
*@b: lenght
*Return: Always 0 (Success)
*/
void *malloc_checked(unsigned int b)
{
int *i;

i = malloc(b);
if (i == NULL)
{
exit(98);
}
return (i);
}
