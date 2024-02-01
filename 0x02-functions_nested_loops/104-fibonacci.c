#include <stdio.h>
#include <limits.h>
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

printf("%ld",LONG_MAX);
for (i = 1; i <= 98; ++i)
{
    if (a > LONG_MAX)
    {
        printf("here %d",i);
    }
if (i < 98)
{
printf("%ld\n", a);
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