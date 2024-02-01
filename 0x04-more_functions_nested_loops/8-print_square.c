/**
* _putchar - writes the character c to stdout
* @c: The character to print
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c);
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
