#include<string.h>
#include <stdio.h>
/**
 * print_rev - check the code
 * @s: input string
 * Return: Always 0.
 */
void print_rev(char *s)
{
int len = strlen(s);
char c[len];
int i;

for (i = strlen(s); i >= 0; --i)
{
c[strlen(s) - i] = s[i];
}
puts(c);
return;
}