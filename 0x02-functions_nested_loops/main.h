/**
*print_alphabet - helper function
*Description: 'print string'
*@c: charecter to start
*@i: counter
*Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char c = 'a';
int i = 0;
while (i < 26)
{
_putchar('0'+c);
i++;
c++;
}
_putchar('\n');
return (0);
}

