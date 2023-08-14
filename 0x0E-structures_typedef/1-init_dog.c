#include <stdlib.h>
#include "dog.h"
/**
*init_dog - start
*Description: 'print string'
*@d: first
*@name: second
*@age: length
*@owner: owner
*Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = maloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
return;
}
