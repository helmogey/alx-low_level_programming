int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int mod(int x, int y);

/**
* add - adds two integers
* @x: first integer to add
* @y: second integer to add
* Return: the sum
*/

int add(int x, int y)
{
return (x + y);
}

/**
* sub - subtracts two integers
* @x: first integer to add
* @y: second integer to add
* Return: the subtract
*/

int sub(int x, int y)
{
return (x - y);
}

/**
* mul - multiplies two integers
* @x: first integer to add
* @y: second integer to add
* Return: the multiple
*/

int mul(int x, int y)
{
return (x * y);
}

/**
* div - divideds two integers
* @x: first integer to add
* @y: second integer to add
* Return: the dividend integer
*/

int div(int x, int y)
{
return (x / y);
}

/**
  mod - finds the modulus of two integers
  @x: first integer to add
  @y: second integer to add
  Return: the modulus
*/

int mod(int x, int y)
{
return (x % y);
}