#include 'main.h'
/**
*print_triangle - helper function
*Description: 'print string'
*@size: input number of times _ will be printed
*Return: Always 0 (Success)
*/
void print_triangle(int size)
{
int j;
int k;
int i;

if (size > 0)
{
for (j = 0; j < size; ++j)
{
for (k = 0; k < size - j; ++k)
{
putchar(' ');
}
for (i = k; i <= size; ++i)
{
putchar('#');
}
putchar('\n');
}
}
else
{
putchar('\n');
}
return;
}
