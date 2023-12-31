#include <stdlib.h>
/**
*array_iterator - start
*Description: 'print string'
*@array: array
*@size: size
*@action: function
*Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (!array || !action)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
return;
}
