#include <stdlib.h>
/**
*array_range - start
*Description: 'print string'
*@min: first
*@max: second
*Return: Always 0 (Success)
*/
int *array_range(int min, int max)
{
int k = max - min + 1, int i;
int *arr = malloc(sizeof(int) * k);

if (min > max)
{
return (NULL);
}
if ( arr == NULL)
{
return (NULL);
}
for (i = 0; i <= k; i++)
{
arr[i] = min++;
}
return (arr);
}
