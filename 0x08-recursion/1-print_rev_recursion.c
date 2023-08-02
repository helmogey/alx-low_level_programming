/**
 * _print_rev_recursion - check the code
 * @s: target location
 * Return: charecter.
 */
void _print_rev_recursion(char *s)
{
int l = strlen(s);

s = s + l - 1;
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(s);
}
return;
}
