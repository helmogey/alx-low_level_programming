#include <main.h>
/**
*_isalpha - helper function
*Description: 'print string'
*@c: input charecter to be checked
*@out: output to be saved
*Return: Always 0 (Success)
*/
int _isalpha(char c)
{
int out;

if (isalpha(c))
{
	out = 1;
}
else
{
	out = 0;
}
return (out);
}
/**
*main - Entry point
*Description: 'print string'
*Return: Always 0 (Success)
*/
int main(void)
{
int r;

r = _isalpha('H');
_putchar(r + '0');
r = _isalpha('o');
_putchar(r + '0');
r = _isalpha(108);
_putchar(r + '0');
r = _isalpha(';');
_putchar(r + '0');
_putchar('\n');
return (0);
}
