#include <stdio.h>
#include "dog.h"
/**
 * new_dog - prints a struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to the structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	if (new_dog == NULL)
	{
		return (NULL);
	}
	else
	{
		new_dog ->name = name;
		new_dog->age = age;
		new_dog->owner = owner;
		return (new_dog);
	}
}
