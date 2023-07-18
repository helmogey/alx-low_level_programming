#include <stdio.h>
/**
*main - Entry point
*Description: 'print string'
*Return: Always 0 (Success)
*/
int main(void)
{
    int i;
    int res = 1;

    for (i = 0; i < 1024; ++i)
    {
        if ( i%3 == 0 && i%5 == 0)
        {
            res = res + i;
        }
    }
    printf("%d",res);
    return (res);
}
