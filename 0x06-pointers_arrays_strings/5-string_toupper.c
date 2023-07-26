#include <ctype.h>
/**
 * *string_toupper - check the code
 * @str: input
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
int i;

for (i = 0; str[i] != '\0'; ++i)
{
str[i] = toupper(str[i]);
}
return (str);
}
