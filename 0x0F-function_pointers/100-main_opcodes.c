#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int data, i;
char *arr;

if (argc != 2)
{
printf("Error\n");
exit(98);
}
data = atoi(argv[1]);
if (data < 0)
{
printf("Error\n");
exit(99);
}
arr = (char *)main;
for (i = 0; i < data; i++)
{
if (i == data - 1)
{
printf("%02hhx\n", arr[i]);
break;
}
printf("%02hhx ", arr[i]);
}
return (0);
}
