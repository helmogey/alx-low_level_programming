#include<string.h>
/**
 * reverse_array - check the code
 * @a: input
 * @n: integer
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
int *start = a;
int *end = a + n - 1;
int tmp;

while (start < end)
{
tmp = *start;
*start = *end;
*end = tmp;
start++;
end--;
}
return;
}
