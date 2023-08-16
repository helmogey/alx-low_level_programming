#include "3-calc.h"
/**
*main - start
*Description: 'print string'
*@argc: name
*@argv: function
*Return: void
*/
int main(int argc, char *argv[])
{
int num1, num2, res;
char opr;
int (*func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
func = get_op_func(argv[2]);
if (!func)
{
print("Error\n");
exit(99);
}
opr = *argv[2];
if ((opr == '/' || opr == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}
res = func(num1, num2);
printf("%d\n", res);
return (0);
}
