#include 'main.h'
/**
*print_diagonal - helper function
*Description: 'print string'
*@n: input number of times _ will be printed
*Return: Always 0 (Success)
*/
void print_diagonal(int n)
{
int j;
int k;

if (n > 0)
{
for (j = 0; j <= n; ++j)
{
for (k = 0; k < j; ++k)
{
_putchar(' ');
}
_putchar('\\');
_putchar(' ');
}
}
_putchar('\n');
return;
}

