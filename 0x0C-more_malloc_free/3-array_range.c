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
int i, k = max - min + 1;
int *arr = malloc(sizeof(int) * k);

if (min > max || arr == NULL)
{
return (NULL);
}
for (i = 0; i <= k; i++)
{
arr[i] = min++;
}
return (arr);
}
