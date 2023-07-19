#include <stdio.h>
/**
*main - Entry point
**Return: Always 0 (Success)
*/
int main(void)
{
long int a = 1;
long int b = 2;
long int c;
int i;

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
