#include "variadic_functions.h"
/**
*print_numbers - start
*Description: 'print string'
*@separator: name
*@n: function
*Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list lst;

va_start(lst, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(lst, int));
if (separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
return;
}
