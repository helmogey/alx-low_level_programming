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
int **res = (int **) malloc(sizeof(int *) * height);
int i, j;

if (res == NULL)
{
return (NULL);
}
if (width <= 0 || height <= 0)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
res[i] = (int *) malloc(sizeof(int) * width);
if (res[i] == NULL)
{
free(res);
for (j = 0; j < i; j++)
{
free(res[j]);
}
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
res[i][j] = 0;
}
}
return (res);
}
