#include <string.h>
/**
 * *rot13 - check the code
 * @str: input
 * Return: Always 0.
 */
char *rot13(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++) {
if (isalpha(str[i])) {
if (isupper(str[i])) {
str[i] = ((str[i] - 'A' + 13) % 26) + 'A';
}
else
{
str[i] = ((str[i] - 'a' + 13) % 26) + 'a';
}
}
}
return (str);
}
