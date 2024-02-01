#include <stdio.h>
/**
*main - Entry point
*Description: 'print string'
*Return: Always 0 (Success)
*/
int main(void)
{
long int a = 1, res = 0, b = 2, c, i;

for (i = 1; i <= 50; ++i)
{
if (a <= 4000000 && a % 2 == 0)
{
res = res + a;
}
c = a + b;
a = b;
b = c;
}
printf("%ld\n", res);
return (0);
}
