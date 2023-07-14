#include <stdio.h>
/*
 * print_number -  This function prints the digits of a given\
 *  number to the console using putchar.
 * Description: 'print string'
 * @param num The number to print.
 */
void print_number(int num)
{
	if (num < 0)
{
	putchar('-');
	num = -num;
}
	if (num / 10)
{
	print_number(num / 10);
}
	putchar(num % 10 + '0');
}
/**
*main - Entry point
*Description: 'print string'
*Return: Always 0 (Success)
*/

int main(void)
{
	int count = 0;

	while (count < 10)
{
		print_number(count);
		count++;
}
	putchar('\n');
	return (0);
}

