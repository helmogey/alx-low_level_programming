#include<string.h>
/**
 * rev_string - check the code
 * @s: input string
 * Return: Always 0.
 */
void rev_string(char *s)
{
char *start = s;
char *end = s + strlen(s) - 1;

while (start < end)
{
char temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
