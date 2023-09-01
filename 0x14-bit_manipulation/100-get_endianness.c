#include "main.h"
/**
*get_endianness - start
*Description: 'print string'
*Return: void
*/
int get_endianness(void)
{
unsigned int n = 1;
unsigned char *byte = (unsigned char *) &n;

return ((byte[0] == 1) ? 0 : 1);
}
