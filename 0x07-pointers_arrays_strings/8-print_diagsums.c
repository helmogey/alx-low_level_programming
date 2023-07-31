#include <string.h>
/**
 * print_diagsums - check the code
 * @a: target location
 * @size: value
 * Return: charecter.
 */
void print_diagsums(int *a, int size)
{
int i;
int out = 0, out2 = 0;
int *p = a;

for (i = 0; i < size; i++)
{
out = out + *p;
p = p + size + 1;
}
p = a;
p = p + size - 1;
for (i = size - 1; i >= 0; i--)
{
out2 = out2 + *p;
p = p + size - 1;
}
printf("%d, ", out);
printf("%d\n", out2);
return;
}
