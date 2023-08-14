#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
*new_dog - start
*Description: 'print string'
*@name: name
*@age: age
*@owner: owner
*Return: struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int name_l = strlen(name), owner_l = strlen(owner);

dog = malloc(sizeof(dog_t));
dog->name = malloc(sizeof(char) * (name_l + 1));
dog->age = malloc(sizeof(float));
dog->owner = malloc(sizeof(char) * (owner_l + 1));
if (dog == NULL || dog->name == NULL || dog->age == NULL || dog->owner == NULL)
{
return (NULL);
}
strcpy(dog->name, name);
strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
