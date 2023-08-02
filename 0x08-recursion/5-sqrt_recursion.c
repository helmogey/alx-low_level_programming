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
else if (n == 0)
{
return (1);
}
else
{
return (n / _sqrt_recursion(n--));
}
}
