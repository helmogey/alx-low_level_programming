#include <stdlib.h>
/**
*argstostr - start
*Description: 'print string'
*@ac: first string
*@av: second string
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
ch[i] = av[i][0];
}
return (ch);
}
