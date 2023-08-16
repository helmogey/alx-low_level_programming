/**
*print_name - start
*Description: 'print string'
*@name: name
*@f: function
*Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
{
f(name);
}
return;
}
