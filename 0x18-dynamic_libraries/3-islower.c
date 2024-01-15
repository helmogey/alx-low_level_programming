#include "main.h"

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
