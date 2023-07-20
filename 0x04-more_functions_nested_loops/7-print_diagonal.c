/**
* _putchar - writes the character c to stdout
* @c: The character to print
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c);
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
