/**
* _putchar - writes the character c to stdout
* @c: The character to print
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c);
/**
*more_numbers - helper function
*Description: 'print string'
*Return: Always 0 (Success)
*/
void more_numbers(void)
{
int i;
int j;

for (j = 0; j < 10; ++j)
{
for (i = 0; i <= 14; ++i)
{
if (i >= 10)
{
_putchar('0' + i / 10);
}
_putchar('0' + i % 10);
}
_putchar('\n');
}
return;
}

