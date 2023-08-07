#include <stdlib.h>
/**
*_strdup - start
*Description: 'print string'
*@str: size
*Return: Always 0 (Success)
*/
char *_strdup(char *str)
{
char *str2;
unsigned int l, i = 0;

while (str[l])
{
l++;
}
str2 = malloc(sizeof(char) * l);
if (str == NULL)
{
return (NULL);
}
while (i < sizeof(str))
{
str2[i] = str[i];
i++;
}
return (str2);
}
