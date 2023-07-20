/**
*print_numbers - helper function
*Description: 'print string'
*Return: Always 0 (Success)
*/
int _putchar(char c);
void print_numbers(void)
{
int i;
for (i = 0; i < 10; ++i)
{
_putchar('0' + i);
}
_putchar('\n');
return;
}

