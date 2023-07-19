#include <stdio.h>
/**
*main - Entry point
*Description: 'print string'
*@a: integer
*@b: integer
*@c: integer
*@i: integer
*Return: Always 0 (Success)
*/
int main() {
    long int a = 1, b = 2, c, i;

    for (i = 1; i <= 50; ++i)
    {
        printf("%ld\n", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
