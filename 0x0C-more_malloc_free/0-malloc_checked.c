#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc
 * @b: input
 * Return: pointer or NULL
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p != NULL)
	{
		return (p);
	}
	else
	{
		exit(98);
	}
}
