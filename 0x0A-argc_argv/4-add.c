#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
int out = 0;
int counter = 0;

if (argc < 3)
{
printf("0\n");
return (1);
}
for (i = 0; i < argc; i++)
{
if (isdigit(atoi(argv[i])))
{
out = out + atoi(argv[i]);
counter++;
}
else
{
printf("Error\n");
return (1);
}
}
if (counter == argc - 1)
{
printf("%d\n", out);
return (0);
}
return (0);
}
