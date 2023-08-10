#include <stdlib.h>
/**
*string_nconcat - start
*Description: 'print string'
*@s1: first
*@s2: second
*@n: length
*Return: Always 0 (Success)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *res;
unsigned int l1 = 0, l2 = 0, i = 0;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1 && s1[l1])
{
l1++;
}
while (s2 && s2[l2])
{
l2++;
}
if (n < l2)
{
res = malloc(sizeof(char) * (l1 + n + 1));
}
else
{
res = malloc(sizeof(char) * (l1 + l2 + 1));
}
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
while (i < n || i < l2)
{
res[l1 + i] = s2[i];
i++;
}
}
res[l1 + i] = '\0';
return (res);
}

