#include <stdlib.h>
/**
*str_concat - start
*Description: 'print string'
*@s1: first string
*@s2: second string
*Return: Always 0 (Success)
*/
char *argstostr(int ac, char **av)
{
char *ch = malloc(sizeof(char) * ac);
int i;

if (ac == 0 || av == NULL)
{
return (NULL);
}
if (ch == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
ch[i] = av[i];
}
return (ch);
}
