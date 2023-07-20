#include <cstdlib>

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
for (j = 0; j < n; ++j)
{
for (k = 0; k <= j; ++k)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
_putchar('\n');
return;
}


void print_number(int n)
{
int num;
if (n < 0)
{
num = abs(n);
_putchar('-');
}
else
{
num = n;
}
if (n < 10)
{
_putchar('0' + num);    
}
else if (num < 100)
{
_putchar('0' + num / 10);
_putchar('0' + num / 10);
}
else if (num < 1000)
{
_putchar('0' + num / 100);
_putchar('0' + num / 100);
}
else if (num < 10000)
{
_putchar('0' + num / 1000);
_putchar('0' + num / 1000);
}
else if (num < 10000)
{
_putchar('0' + num / 1000);
_putchar('0' + num / 1000);
}
else if (num < 10000)
{
_putchar('0' + num / 1000);
_putchar('0' + num / 1000);
}
}
