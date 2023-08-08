#include <stdlib.h>
/**
*str_concat - start
*Description: 'print string'
*@s1: first string
*@s2: second string
*Return: Always 0 (Success)
*/
char *str_concat(char *s1, char *s2)
{
char *res;
int l1 = 0, l2 = 0, i = 0;

while (s1[l1])
{
l1++;
}
while (s2[l2])
{
l2++;
}
res = malloc(sizeof(char) * (l1 + l2 + 1));
if (res == NULL)
{
return (NULL);
}
if (l1 > 0)
{
while (i < l1)
{
res[i] = s1[i];
i++;
}
i = 0;
}
if (l2 > 0)
{
while (i < l2)
{
res[l1 + i] = s2[i];
i++;
}
}
res[l1 + i] = '\0';
return (res);
}
