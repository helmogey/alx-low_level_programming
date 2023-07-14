#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*Description: 'print string'
*Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int n1 = n % 10;

	if (n1 > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, n1);
	else if (n1 == 5)
	printf("Last digit of %d is %d and is 5\n", n, n1);
	else if (n1 < 6)
	printf("Last digit of %d is %d and is less than 6\n", n, n1);
	return (0);
}
