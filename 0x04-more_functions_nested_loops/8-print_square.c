/**
*print_square - helper function
*Description: 'print string'
*@size: input number of times _ will be printed
*Return: Always 0 (Success)
*/
void print_square(int size)
{
int j;
int k;

if (size > 0)
{
for (j = 0; j < size; ++j)
{
for (k = 0; k < size; ++k)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
return;
}
