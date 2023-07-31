#include <string.h>
/**
 * _strspn - check the code
 * @s: target location
 * @accept: value
 * Return: charecter.
 */
void set_string(char **s, char *to)
{
*s = (char *) malloc(strlen(to) + 1);
strcpy(*s, to);
return;
}
