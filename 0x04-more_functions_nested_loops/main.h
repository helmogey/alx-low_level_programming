int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
int _putchar(char c);


/**
*print_numbers - helper function
*Description: 'print string'
*Return: Always 0 (Success)
*/

void print_numbers(void)
{
int i;

for (i = 0; i <= 9; ++i)
{
_putchar(i + '0');
}
_putchar('\n');
return;
}

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

