#include "main.h"
/**
*clear_bit - start
*Description: 'print string'
*@n: input
*@index: index
*Return: void
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1 << index;

if (index >= 32)
{
return (-1);
}
*n = *n & ~mask;
return (1);
}
