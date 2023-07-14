#include <stdio.h>
/**
*main - Entry point
*Description: 'print string'
*Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;
	int j;

	while (i < 10)
{
		j = 0;
		while ( j < 10)
{
		if (i < j)
{
		putchar('0' + i);
		putchar('0' + j);
		if (i < 8 || j < 9)
{
		putchar(',');
		putchar(' ');
}
}
		j++;
}
	i++;
}
	putchar('\n');
	return (0);
}
