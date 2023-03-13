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
	if (str == NULL)
	{
		return (NULL);
	}
	p = malloc((sizeof(char) * size) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(p, str);
		return (p);
	}
}
