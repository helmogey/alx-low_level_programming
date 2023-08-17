#include "variadic_functions.h"
/**
*sum_them_all - start
*Description: 'print string'
*@n: name
*Return: void
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int res = 0;
va_list data;

va_start(data, n);
for (i = 0; i < n; i++)
{
res = res + va_arg(data, int);
}
va_end(data);
return (res);
}
