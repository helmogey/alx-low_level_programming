#include<string.h>
#include "main.h"
/**
 * puts_half - check the code
 * @str: input string
 * Return: Always 0.
 */
void puts_half(char *str)
{
int l = strlen(str);
int i;

for (i = strlen(str) / 2; i < l; ++i)
{
_putchar(str[i]);
}
return;
}
