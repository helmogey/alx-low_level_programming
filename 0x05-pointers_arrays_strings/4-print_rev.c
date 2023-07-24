#include <string.h>
/**
 * print_rev - check the code
 * @s: input string
 * Return: Always 0.
 */
void print_rev(char *s)
{
char c;
int i;

for (i = strlen(c); i >= 0; --i)
{
c[i - strlen(c)] = s[i];
}
puts(c);
return;
}
