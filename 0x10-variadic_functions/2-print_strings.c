#include "variadic_functions.h"
/**
*print_strings - start
*Description: 'print string'
*@separator: sep
*@n: name
*Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list lst;

va_start(lst, n);
for (i = 0; i < n - 1; i++)
{
if (va_arg(lst, char *) == NULL)
{
printf("nil");
}
else
{
printf("%s", va_arg(lst, char *));
}
if (separator != NULL)
{
printf("%s", separator);
}
}
if (va_arg(lst, char *) == NULL)
{
printf("nil\n");
}
else
{
printf("%s\n", va_arg(lst, char *));
}
va_end(lst);
return;
}
