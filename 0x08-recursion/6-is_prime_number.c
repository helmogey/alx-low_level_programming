/**
 * helper_fn - check the code
 * @n: input number
 * @i: number
 * Return: charecter.
 */
int helper_fn(int n, int i)
{
if (n > i && (n / i) == 0)
{
return (1);
}
else if (n <= i)
{
return (0);
}
else
{
return (helper_fn(n, i++));
}
}
/**
 * is_prime_number - check the code
 * @n: input number
 * Return: charecter.
 */
int is_prime_number(int n)
{
if (n < 0)
{
return (0);
}
else
{
return (helper_fn(n, 0));
}
}
