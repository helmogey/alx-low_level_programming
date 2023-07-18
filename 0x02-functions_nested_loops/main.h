#include <ctype.h>
/**
*print_alphabet - helper function
*Description: 'print string'
*@c: charecter to start
*@i: counter
*Return: Always 0 (Success)
*/
int _putchar(char c);

void print_alphabet(void)
{
char c = 'a';
int i = 0;
while (i < 26)
{
_putchar(c);
i++;
c++;
}
_putchar('\n');
return;
}

/**
*print_alphabet_x10 - helper function
*Description: 'print string'
*@c: charecter to start
*@i: counter
*Return: Always 0 (Success)
*/
int _putchar(char c);

void print_alphabet_x10(void)
{
int i = 0;

for (i = 0; i < 10; ++i)
{
print_alphabet();
}
return;
}

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

