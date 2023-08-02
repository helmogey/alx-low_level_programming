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
return (n / is_prime_number(n - 1));
}
}
