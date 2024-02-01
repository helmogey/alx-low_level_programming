#include "main.h"
/**
*binary_to_uint - start
*Description: 'print string'
*@b: input
*Return: void
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0, len = 0;

if (b == NULL)
{
return (0);
}
while (b[len] != '\0')
{
if (b[len] == '0')
{
res = (res << 1) | 0;
}
else if (b[len] == '1')
{
res = (res << 1) | 1;
}
else
{
return (0);
}
len++;
}
return (res);
}
