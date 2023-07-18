#include <main.h>
/**
*print_alphabet_x10 - helper function
*Description: 'print string'
*Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
char alpha = 'abcdefghijklmnopqrstuvwxyz';
int i;
for (i = 0; i < 10; ++i)
{
	_putchar(alpha);
}
return;
}

/**
*main - Entry point
*Description: 'print string'
*Return: Always 0 (Success)
*/
int main(void)
{
print_alphabet_x10();
return (0);
}
