/**
* _putchar - writes the character c to stdout
* @c: The character to print
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c);
/**
*print_most_numbers - helper function
*Description: 'print string'
*Return: Always 0 (Success)
*/
void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; ++i)
{
if (i != 2 && i != 4)
{
_putchar('0' + i);
}
}
_putchar('\n');
return;
}

