#include <main.h>
/**
*_islower - helper function
*Description: 'print string'
*@c: input charecter to be checked
*@out: output to be saved
*Return: Always 0 (Success)
*/
int _islower(char c)
{
int out;

if (islower(c))
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

r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}
