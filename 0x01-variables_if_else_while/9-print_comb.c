#include <stdio.h>
/**
*main - Entry point
*Description: 'print string'
*Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
{
	putchar('0' + i);
	putchar(',');
	putchar(' ');
	i++;
}
	putchar('\n');
	return (0);
}
