#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - create array
 * @str: input
 * Return: poniter or null
*/

char *_strdup(char *str)
{
	char *p;
	unsigned int size = 0;
	unsigned int i;

	for (i = 0; str[i]; i++)
	{
		size++;
	}
	if (size == 0)
	{
		return (0);
	}
	p = malloc(sizeof(char) * size);
	if (p == 0)
	{
		return (0);
	}
	else
	{
		strcpy(p, str);
		return (p);
	}
}
