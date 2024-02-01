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
unsigned int l = 0, i = 0;

while (str[l])
{
l++;
}
str2 = malloc(sizeof(char) * (l + 1));
if (str == NULL || str2 == NULL)
{
return (NULL);
}
while (i < l)
{
str2[i] = str[i];
i++;
}
return (str2);
}
