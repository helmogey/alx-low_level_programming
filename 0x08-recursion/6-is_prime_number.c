/**
 * helper_fn - check the code
 * @n: input number
 * @i: number
 * Return: charecter.
 */
int helper_fn(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (helper_fn(n, i - 1));
}
/**
 * is_prime_number - check the code
 * @n: input number
 * Return: charecter.
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (helper_fn(n, n - 1));
}
}
