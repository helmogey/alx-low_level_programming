#include <stdio.h>
#include<string.h>
/**
 * rev_string - check the code
 * @str: input string
 * Return: Always 0.
 */
void puts2(char *str)
{
int l = strlen(str);
int i;

for(i = 0; i < l; i+=2)
{
putchar(str[i]);
}
putchar('\n');
return;
}
