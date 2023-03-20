#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * print_dog - print the values of struct
 * @d: pointer to the struct
*/
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("%s\n", d->name);
	}
	printf("%f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("%s\n", d->owner);
	}
}
