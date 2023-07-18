#include <ctype.h>
#include <stdlib.h>
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


/**
*print_sign - helper function
*Description: 'print string'
*@n: input number
*@out: output to be saved
*Return: Always 0 (Success)
*/
int print_sign(int n)
{
	int out;

if (n > 0)
{
	_putchar('+');
	out = 1;
}
else if (n < 0)
{
	_putchar('-');
	out = -1; 
}
else
{
	_putchar('0');
	out = 0;
}
	return (out);
}

/**
*_abs - helper function
*Description: 'print string'
*@n: input number
*Return: Always 0 (Success)
*/
int _abs(int n)
{
	return (abs(n));
}


/**
*print_last_digit - helper function
*Description: 'print string'
*@n: input number
*Return: Always 0 (Success)
*/
int print_last_digit(int n)
{
	n = abs(n) % 10;
	_putchar('0' + abs(n) % 10);
	return (abs(n) % 10);
}



/**
*jack_bauer - helper function
*Description: 'print string'
*Return: Always 0 (Success)
*/
void jack_bauer(void)
{
    int i;
    int j;

    for (i = 0; i < 24; i++)
    {
        for (j = 0; j < 60; j++)
        {
            _putchar('0' + (i / 10));
            _putchar('0' + (i % 10));
            _putchar(':');
            _putchar('0' + (j / 10));
            _putchar('0' + (j % 10));
            _putchar('\n');
        }
    }
    return;
}



/**
*times_table - helper function
*Description: 'print string'
*Return: Always 0 (Success)
*/
void times_table(void)
{
    int i;
    int j;

    for (i = 0; i < 10; i++)
    {
        _putchar('0');
        _putchar(',');
        for (j = 1; j < 10; j++)
        {
            if (i * j < 10)
            {
                if (j < 9)
                {
                    _putchar(' ');
                    _putchar(' ');
                    _putchar('0' + (i * j));
                    _putchar(',');   
                }
                else
                {
                    _putchar(' ');
                    _putchar(' ');
                    _putchar('0' + (i * j));
                }
            }
            else
            {
                if (j < 9)
                {
                    _putchar(' ');
                    _putchar('0' + (i * j) / 10);
                    _putchar('0' + (i * j) % 10);
                    _putchar(',');
                }
                else if (i < 2)
                {
                    _putchar('0' + (i * j) / 10);
                    _putchar('0' + (i * j) % 10);
                }
                else
                {
                    _putchar(' ');
                    _putchar('0' + (i * j) / 10);
                    _putchar('0' + (i * j) % 10);
                }

            }
        }
		_putchar('\n');
    }
    return;
}





/**
*add - helper function
*Description: 'print string'
*@a: input first number
*@b: input second number
*Return: Always 0 (Success)
*/
int add(int a, int b)
{
	return (a + b);
}



/**
*print_to_98 - helper function
*Description: 'print string'
*@n: input number
*Return: Always 0 (Success)
*/
void print_to_98(int n)
{
	int i;

	if (n >= 0 && n < 10)
	{
		_putchar('0' + n);
        if (n < 98)
		{
			_putchar(',');
		}
	}
	else if (n >= 0 && n > 10)
	{
		_putchar('0' + n/10);
		_putchar('0' + n%10);
        if (n < 98)
		{
			_putchar(',');
		}
	}
    else if ( n < 0 && abs(n) < 10)
    {
        _putchar('-');
        _putchar('0' + abs(n));
        if (n < 98)
		{
			_putchar(',');
		}
    }
    else
    {
        _putchar('-');
        _putchar('0' + abs(n) / 10);
        _putchar('0' + abs(n) % 10);
		if (n < 98)
		{
			_putchar(',');
		}
    }
	for (i = n + 1; i < 98; ++i)
	{
		if (i >= 0 && i < 10)
		{
			_putchar(' ');
			_putchar('0' + i);
            if (n < 98)
			{
				_putchar(',');
			}
		} 
		else if (i >= 0 && i > 10)
		{
			_putchar(' ');
			_putchar('0' + i/10);
			_putchar('0' + i%10);
            if (n < 98)
			{
				_putchar(',');
			}
		}
        else if (i < 0 && i < 10)
        {
            _putchar('-');
            _putchar(' ');
			_putchar('0' + abs(i));
            if (n < 98)
			{
				_putchar(',');
			}
        }
        else
        {
            _putchar('-');
            _putchar(' ');
			_putchar('0' + abs(i)/10);
			_putchar('0' + abs(i)%10);
            if (n < 98)
			{
				_putchar(',');
			}
        }
		
	}
	_putchar('\n');
	return;
}

