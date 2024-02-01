#include<string.h>
#include "main.h"
/**
 * puts2 - check the code
 * @str: input string
 * Return: Always 0.
 */
void puts2(char *str)
{
int l = strlen(str);
int i;

for (i = 0; i < l; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
return;
}
