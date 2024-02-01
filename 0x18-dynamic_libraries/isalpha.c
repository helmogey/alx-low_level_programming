#include "main.h"
/**
*_isalpha - helper function
*Description: 'print string'
*@c: input charecter to be checked
*@out: output to be saved
*Return: Always 0 (Success)
*/
int _isalpha(int c)
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
