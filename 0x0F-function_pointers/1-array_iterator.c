/**
*array_iterator - start
*Description: 'print string'
*@array: array
*@size: size
*@action: function
*Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

for (i = 0; i < size; i++)
{
action(array[i]);
}
return;
}
