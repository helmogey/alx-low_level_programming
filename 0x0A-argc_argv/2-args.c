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
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", *argv[i]);
}
return (0);
}

