#include <string.h>
/**
 * helper_fn - check the code
 * @s: input string
 * @l: lenght
 * @n: number
 * Return: charecter.
 */
int helper_fn(char *s, int l, int n)
{
if (n == l)
{
return (1);
}
else if (*(s + l - n) != *(s + l + n))
{
return (0);
}
else
{
return (helper_fn(s, l, n + 1));
}
}
/**
 * is_palindrome - check the code
 * @s: input string
 * Return: charecter.
 */
int is_palindrome(char *s)
{
if (strlen(s) % 2 == 0)
{
return (0);
}
else
{
return (helper_fn(s, (strlen(s) / 2) + 1, 0));
}
}
