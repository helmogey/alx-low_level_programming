#include <stdio.h>

/**
*main - start
*Description: 'print string'
*@argc: number of arguments
*@argv: arguments
*Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
if (argc < 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", argv[1] * argv[2]);
}
