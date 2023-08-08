#include <stdlib.h>
/**
*alloc_grid - start
*Description: 'print string'
*@width: first string
*@height: second string
*Return: Always 0 (Success)
*/
int **alloc_grid(int width, int height)
{
int **res = (int **) malloc(sizeof(int *) * width * height);
int i;

if (res == NULL)
{
return (NULL);
}
if (width <= 0 || height <= 0)
{
return (NULL);
}
for (i = 0; i < width * height; i++)
{
res[i] = 0;
}
return (res);
}
