#include<string.h>
#include <stdio.h>
/**
 * print_rev - check the code
 * @s: input string
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i;

for (i = strlen(s) - 1; i >= 0; --i)
{
charput(s[i]);
}
charput('\n');
return;
}
