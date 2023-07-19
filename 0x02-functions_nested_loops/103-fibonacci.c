#include <stdio.h>
/**
*main - Entry point
*Description: 'print string'
*@a: integer to be the final
*@b: integer
*@c: integer
*@i: integer
*@res: final output
*Return: Always 0 (Success)
*/
int main(void)
{
long int a = 1, res = 1, b = 2, c, i;

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
