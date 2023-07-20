#include <stdio.h>
/**
* main - check the code
* Return: Always 0.
*/
int main(void)
{
long number = 612852475143;
long factor = 2;
long largest_factor = 0;

while (number > 1)
{
if (number % factor == 0)
{
largest_factor = factor;
while (number % factor == 0)
{
number /= factor;
}
}
factor++;
}
printf("%ld", largest_factor);
return (0);
}




void print_number(int n)
{
if (n < 10)
{
_putchar('0' + n);    
}
else if (n < 100)
{
_putchar('0' + n / 10);
_putchar('0' + n / 10);
}
else if (n < 1000)
{
_putchar('0' + n / 100);
_putchar('0' + n / 100);
}
else if (n < 10000)
{
_putchar('0' + n / 1000);
_putchar('0' + n / 1000);
}
else if (n < 10000)
{
_putchar('0' + n / 1000);
_putchar('0' + n / 1000);
}
else if (n < 10000)
{
_putchar('0' + n / 1000);
_putchar('0' + n / 1000);
}
}




