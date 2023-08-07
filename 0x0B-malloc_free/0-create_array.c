#include <stdlib.h>
/**
*create_array - start
*Description: 'print string'
*@size: size
*@c: input
*Return: Always 0 (Success)
*/
char *create_array(unsigned int size, char c)
{
char *ch = (char *) malloc(sizeof(char) * size);
unsigned int i = 0;

if (size == 0)
{
return (NULL);
}
if (ch == NULL)
{
return (NULL);
}
while(i < size)
{
ch[i] = c;
i++;
}
ch[i] = '\0';
return (ch);
}
