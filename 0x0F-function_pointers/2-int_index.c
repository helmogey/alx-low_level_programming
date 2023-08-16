/**
*int_index - start
*Description: 'print string'
*@array: name
*@size: size
*@cmp: function
*Return: void
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i, out;

if (size <= 0)
{
return (-1);
}
if (!array || !cmp)
{
return;
}
for (i = 0; i < size; i++)
{
out = cpm(array[i]);
if (out > 0)
{
return (i);
}
}
return (-1);
}

