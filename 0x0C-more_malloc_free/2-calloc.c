#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - concatenate strings
 * @nmemb: input
 * @size: input
 * Return: pointer or NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	c = p;
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		p = c;
		for (i = 0; i < nmemb; i++)
		{
			c[i] = '\0';
		}
		return (p);
	}
}
