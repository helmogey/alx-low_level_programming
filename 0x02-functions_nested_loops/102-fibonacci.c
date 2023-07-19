#include <stdio.h>
/**
*main - Entry point
*Description: 'print string'
*@a: integer to be the final
*@b: integer
*@c: integer
*@i: integer
*Return: Always 0 (Success)
*/
int main(void)
{
long int a = 1, b = 2, c, i;

for (i = 1; i <= 50; ++i)
{
if (i < 50)
{
printf("%ld, ", a);
}
else
{
printf("%ld\n", a);
}
c = a + b;
a = b;
b = c;
}
return (0);
}