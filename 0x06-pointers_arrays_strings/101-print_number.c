#include "main.h"
/**
 * print_number - check the code
 * @n: input
 * Return: Always 0.
 */
void print_number(int n)
{
int num;
if (n < 0)
{
num = n * -1;
_putchar('-');
}
else
{
num = n;
}
if (num < 10)
{
_putchar('0' + num);    
}
else if (num < 100)
{
_putchar('0' + num / 10);
_putchar('0' + num % 10);
}
else if (num < 1000)
{
_putchar('0' + num / 100);
_putchar('0' + num%100 / 10);
_putchar('0' + num%100 % 10);
}
else if (num < 10000)
{
_putchar('0' + num / 1000);
_putchar('0' + num%1000 / 100);
_putchar('0' + (num%1000)%100 / 10);
_putchar('0' + (num%1000)%100 % 10);
}
else if (num < 100000)
{
_putchar('0' + num / 10000);
_putchar('0' + num%10000 / 1000);
_putchar('0' + (num%10000)%1000 / 100);
_putchar('0' + ((num%10000)%1000)%100 / 10);
_putchar('0' + ((num%10000)%1000)%100 % 10);
}
else if (num < 1000000)
{
_putchar('0' + num / 1000000);
_putchar('0' + num%1000000 / 100000);
_putchar('0' + (num%1000000)%100000 / 10000);
_putchar('0' + ((num%1000000)%100000)%10000 / 1000);
_putchar('0' + (((num%1000000)%100000)%10000)%100 / 100);
_putchar('0' + (((num%1000000)%100000)%10000)%100 / 10);
_putchar('0' + (((num%1000000)%100000)%10000)%100 % 10);
}
else if (num < 10000000)
{
_putchar('0' + num / 10000000);
_putchar('0' + num%10000000 / 1000000);
_putchar('0' + (num%10000000)%1000000 / 100000);
_putchar('0' + ((num%10000000)%1000000)%100000 / 10000);
_putchar('0' + (((num%10000000)%1000000)%100000)%1000 / 1000);
_putchar('0' + (((num%10000000)%1000000)%100000)%1000 / 100);
_putchar('0' + (((num%1000000)%100000)%10000)%100 / 10);
_putchar('0' + (((num%1000000)%100000)%10000)%100 % 10);
}
return;
}
