#include <string.h>
#include "main.h"
/**
 * print_chessboard - check the code
 * @a: input
 * Return: charecter.
 */
void print_chessboard(char (*a)[8])
{
int i;
int j;
int l = sizeof(a);

for (i = 0; i < l; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
return;
}
