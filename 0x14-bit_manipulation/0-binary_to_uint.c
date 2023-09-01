/**
*binary_to_uint - start
*Description: 'print string'
*@b: input
*Return: void
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int i, res = 0, len = 0;

if (b == NULL)
{
return (0);
}
while (b[len])
{
if (b[len] != '0' && b[len] != '1')
{
return (0);
}
if (b[len] == '1')
{
res = res + (2 * len);
}
len++;
}
return (res);
}
