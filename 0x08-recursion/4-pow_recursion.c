/**
 * _pow_recursion - check the code
 * @x: first number
 * @y: second number
 * Return: charecter.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else
{
return (x * _pow_recursion(x, y--));
}
}
