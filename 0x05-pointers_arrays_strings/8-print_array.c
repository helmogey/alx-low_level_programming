#include <stdio.h>
/**
 * print_array - check the code
 * @a:input array
 * @n:number of elements of the array to be printed
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int i;

if (n > 0)
{
for (i = 0; i < n - 1; ++i)
{
printf("%d, ", a[i]);
}
printf("%d\n", a[i]);
}
else
{
printf("\n");
}
return;
}
