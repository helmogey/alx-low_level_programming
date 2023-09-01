#include "main.h"
/**
*flip_bits - start
*Description: 'print string'
*@n: input
*@m: index
*Return: void
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m;
unsigned int count = 0;

while (xor > 0)
{
if (xor & 1)
{
count++;
}
xor >>= 1;
}
return (count);
}
