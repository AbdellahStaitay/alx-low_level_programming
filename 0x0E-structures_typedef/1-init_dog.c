#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * init_dog - initialize the values of struct
 * @d: pointer to the struct
 * @name: name of dog
 * @age: ag of dog
 * @owner: owner of dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(sizeof(char) * strlen(name));
	if (d->name == 0)
	{
		exit(1);
	}
	d->name = name;
	d->age = age;
	d->owner = malloc(sizeof(char) * strlen(owner));
	if (d->owner == 0)
		exit(1);
	d->owner = owner;
}
