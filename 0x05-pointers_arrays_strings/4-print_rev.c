#include<string.h>
#include <stdio.h>
/**
 * print_rev - check the code
 * @s: input string
 * Return: Always 0.
 */
void print_rev(char *s)
{
char *c[100];
int i;

for (i = strlen(s) - 1; i >= 0; --i)
{
*c[strlen(s) - i] = s[i];
}
puts(*c);
return;
}
