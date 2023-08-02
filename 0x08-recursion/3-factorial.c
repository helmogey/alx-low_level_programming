/**
 * factorial - check the code
 * @n: input number
 * Return: charecter.
 */
int factorial(int n)
{
int f;

if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
