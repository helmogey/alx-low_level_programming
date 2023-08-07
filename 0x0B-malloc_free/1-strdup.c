#include <stdlib.h>
/**
*_strdup - start
*Description: 'print string'
*@str: size
*Return: Always 0 (Success)
*/
char *_strdup(char *str)
{
char *str2 = (char *) malloc(sizeof(char) * sizeof(str + 1));
unsigned int i = 0;

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
