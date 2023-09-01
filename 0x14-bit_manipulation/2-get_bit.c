#include "main.h"
/**
*binary_to_uint - start
*Description: 'print string'
*@b: input
*Return: void
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask = 1 << index;

if (index >= 32)
{
return (-1)
}
return (n & mask) > 0;
}
