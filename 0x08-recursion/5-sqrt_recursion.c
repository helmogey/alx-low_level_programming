/**
 * helper_fn - check the code
 * @n: input number
 * @i: number
 * Return: charecter.
 */
int helper_fn(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (helper_fn(n, i + 1));
}
/**
 * _sqrt_recursion - check the code
 * @n: input number
 * Return: charecter.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (helper_fn(n, 0));
}
}
