/**
 * rev_string - check the code
 * @s: input string
 * Return: Always 0.
 */
void rev_string(char *s)
{
char *start = s;
char *end = str + strlen(str) - 1;

while (start < end)
{
char temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
