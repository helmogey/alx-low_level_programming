#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int out = 0;
int n1, i;
int coins[] = {25, 10, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
n1 = atoi(argv[1]);
if (n1 < 0)
{
printf("0\n");
return (0);
}
for (i = 0; i < 5; i++)
{
while (n1 >= coints[i])
{
out++;
n1 = n1 - coins[i];
}
}
printf("%d\n", out);
return (0);
}
