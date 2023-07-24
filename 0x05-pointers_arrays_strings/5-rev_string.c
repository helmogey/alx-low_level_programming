#include<string.h>
/**
 * rev_string - check the code
 * @s: input string
 * Return: Always 0.
 */
void rev_string(char *s)
{
char *c;
int i;

for (i = strlen(s) - 1; i >= 0; --i)
{
c[strlen(s) - i] = s[i];
}
for (i = 0; i >= 0; ++i)
{
*s[i] = c[i];
}
return;
}
