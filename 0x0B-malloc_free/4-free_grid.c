#include <stdlib.h>
/**
*free_grid - start
*Description: 'print string'
*@grid: first string
*@height: second string
*Return: Always 0 (Success)
*/
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
