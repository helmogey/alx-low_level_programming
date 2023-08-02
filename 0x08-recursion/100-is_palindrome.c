#include <string.h>
/**
 * helper_fn - check the code
 * @s: input string
 * @l1: lenght
 * @l2: length
 * @n: number
 * Return: charecter.
 */
int helper_fn(char *s, int l1, int l2, int n)
{
if (n == l1 - 1)
{
return (1);
}
else if (*(s + l1 - n) != *(s + l2 + n))
{
return (0);
}
else
{
return (helper_fn(s, l1, l2, n + 1));
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
return (helper_fn(s, (strlen(s) / 2) - 1, (strlen(s) / 2), 0));
}
else
{
return (helper_fn(s, (strlen(s) / 2), (strlen(s) / 2), 0));
}
}
