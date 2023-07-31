#include <string.h>
/**
 * print_chessboard - check the code
 * @a: input
 * Return: charecter.
 */
void print_chessboard(char (*a)[8])
{
int i;
int j;

for (i = 0; i < sizeof(a); i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
return;
}
