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
int start;

if (l % 2 == 0)
{
start = l / 2;
}
else
{
start = (l / 2) + 1;
}

for (i = start; i < l; ++i)
{
_putchar(str[i]);
}
_putchar('\n');
return;
}
